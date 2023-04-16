#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define WIDTH 50
#define HEIGHT 50

int grid[WIDTH][HEIGHT];

void init_grid() {
    int i, j;
    for (i = 0; i < WIDTH; i++) {
        for (j = 0; j < HEIGHT; j++) {
            grid[i][j] = rand() % 2;
        }
    }
}

void print_grid() {
    int i, j;
    for (i = 0; i < WIDTH; i++) {
        for (j = 0; j < HEIGHT; j++) {
            if (grid[i][j] == 1) {
                printf("O ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
}

int count_neighbors(int x, int y) {
    int count = 0;
    int i, j;
    for (i = x - 1; i <= x + 1; i++) {
        for (j = y - 1; j <= y + 1; j++) {
            if (i >= 0 && i < WIDTH && j >= 0 && j < HEIGHT) {
                if (i != x || j != y) {
                    count += grid[i][j];
                }
            }
        }
    }
    return count;
}

void update_grid() {
    int new_grid[WIDTH][HEIGHT];
    int i, j;
    for (i = 0; i < WIDTH; i++) {
        for (j = 0; j < HEIGHT; j++) {
            int neighbors = count_neighbors(i, j);
            if (grid[i][j] == 1) {
                if (neighbors < 2 || neighbors > 3) {
                    new_grid[i][j] = 0;
                } else {
                    new_grid[i][j] = 1;
                }
            } else {
                if (neighbors == 3) {
                    new_grid[i][j] = 1;
                } else {
                    new_grid[i][j] = 0;
                }
            }
        }
    }
    for (i = 0; i < WIDTH; i++) {
        for (j = 0; j < HEIGHT; j++) {
            grid[i][j] = new_grid[i][j];
        }
    }
}

int main() {
    init_grid();
    while (1) {
        system("clear");
        print_grid();
        update_grid();
        usleep(100000);
    }
    return 0;
}
