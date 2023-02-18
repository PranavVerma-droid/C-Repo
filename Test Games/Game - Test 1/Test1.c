#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_opengl.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define FOV 60.0f
#define NEAR_PLANE 0.1f
#define FAR_PLANE 1000.0f

typedef struct {
    float x, y, z;
} Vector3;

typedef struct {
    float m[16];
} Matrix4;

typedef struct {
    Vector3 position;
    Vector3 rotation;
    float scale;
} Transform;

typedef struct {
    GLuint vertex_buffer;
    GLuint index_buffer;
    int num_vertices;
    int num_indices;
} Mesh;

typedef struct {
    Transform transform;
    Mesh mesh;
} GameObject;

SDL_Window *window;
SDL_GLContext gl_context;
GameObject game_objects[100];
int num_game_objects = 0;
Matrix4 projection_matrix;
Matrix4 view_matrix;

void init();
void cleanup();
void handle_input();
void update();
void render();
void create_mesh(Mesh *mesh, float *vertices, int num_vertices, int *indices, int num_indices);
void add_game_object(GameObject *game_object, Mesh mesh, Vector3 position, Vector3 rotation, float scale);
Matrix4 get_projection_matrix(float fov, float aspect_ratio, float near_plane, float far_plane);
Matrix4 get_view_matrix(Vector3 position, Vector3 rotation);
Matrix4 get_model_matrix(Transform transform);
void draw_mesh(Mesh mesh, Transform transform);

int main(int argc, char *argv[]) {
    init();

    while (1) {
        handle_input();
        update();
        render();
    }

    cleanup();
    return 0;
}

void init() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        fprintf(stderr, "Could not initialize SDL: %s\n", SDL_GetError());
        exit(1);
    }

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

    window = SDL_CreateWindow("My 3D Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN);
    if (window == NULL) {
        fprintf(stderr, "Could not create SDL window: %s\n", SDL_GetError());
        exit(1);
    }

    gl_context = SDL_GL_CreateContext(window);
    if (gl_context == NULL) {
        fprintf(stderr, "Could not create OpenGL context: %s\n", SDL_GetError());
        exit(1);
    }

    if (glewInit() != GLEW_OK) {
        fprintf(stderr, "Could not initialize GLEW\n");
        exit(1);
    }

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    projection_matrix = get_projection_matrix(FOV, (float)SCREEN_WIDTH / (float)SCREEN_HEIGHT, NEAR_PLANE, FAR_PLANE);
    view_matrix = get_view_matrix((Vector3){0.0f, 0.0f, 0.0f}, (Vector3){0.0f, 0.0f, 0.0f});

    // Create game objects
   
