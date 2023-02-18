#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>

// Define the game board dimensions
#define ROWS 20
#define COLS 30

// Define the player's initial position
#define PLAYER_ROW ROWS - 1
#define PLAYER_COL COLS / 2

// Define the enemy's initial position
#define ENEMY_ROW 2
#define ENEMY_COL COLS / 2

// Define the player and enemy characters
#define PLAYER_CHAR 'P'
#define ENEMY_CHAR 'E'
#define BULLET_CHAR '|'

// Define the player's movement speed
#define PLAYER_SPEED 1

// Define the bullet's movement speed
#define BULLET_SPEED 2

// Define the enemy's movement speed
#define ENEMY_SPEED 1

// Define the game board
char board[ROWS][COLS];

// Define the player's position
int playerRow = PLAYER_ROW;
int playerCol = PLAYER_COL;

// Define the enemy's position
int enemyRow = ENEMY_ROW;
int enemyCol = ENEMY_COL;

// Define the bullet's position
int bulletRow = -1;
int bulletCol = -1;

// Define the score
int score = 0;

// Draw the game board
void drawBoard() {
    system("cls");
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            printf("%c", board[row][col]);
        }
        printf("\n");
    }
}

// Update the player's position
void updatePlayerPosition(int direction) {
    if (direction == -1 && playerCol > 0) {
        board[playerRow][playerCol] = ' ';
        playerCol -= PLAYER_SPEED;
        board[playerRow][playerCol] = PLAYER_CHAR;
    } else if (direction == 1 && playerCol < COLS - 1) {
        board[playerRow][playerCol] = ' ';
        playerCol += PLAYER_SPEED;
        board[playerRow][playerCol] = PLAYER_CHAR;
    }
}

// Update the bullet's position
void updateBulletPosition() {
    if (bulletRow > 0) {
        board[bulletRow][bulletCol] = ' ';
        bulletRow -= BULLET_SPEED;
        board[bulletRow][bulletCol] = BULLET_CHAR;
    } else {
        bulletRow = -1;
        bulletCol = -1;
    }
}

// Update the enemy's position
void updateEnemyPosition() {
    if (enemyRow < ROWS - 1) {
        board[enemyRow][enemyCol] = ' ';
        enemyRow += ENEMY_SPEED;
        board[enemyRow][enemyCol] = ENEMY_CHAR;
    } else {
        enemyRow = ENEMY_ROW;
        enemyCol = rand() % COLS;
        score++;
    }
}

int main() {
    // Initialize the game board
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            if (row == PLAYER_ROW && col == PLAYER_COL) {
                board[row][col] = PLAYER_CHAR;
            } else if (row == ENEMY_ROW && col == ENEMY_COL) {
                board[row][col] = ENEMY_CHAR;
            } else {
                board[row][col] = ' ';
            }
        }
    }
}
