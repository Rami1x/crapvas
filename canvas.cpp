// I create a canvas using multidimensional arrays in Coordinates
// RAMI RAMADAN 
// JULY 11, 2024.
#include <stdio.h>

//CANVAS SIZE
#define WIDTH 20
#define HEIGHT 10

// Function to initialize the canvas with blank spaces
void initializeCanvas(char canvas[HEIGHT][WIDTH]) {
    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            canvas[i][j] = ' ';
        }
    }
}

// Function to print the canvas to the console
void printCanvas(char canvas[HEIGHT][WIDTH]) {
    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            printf("%c", canvas[i][j]);
        }
        printf("\n");
    }
}

// Function to draw a character at a specific position on the canvas
void drawChar(char canvas[HEIGHT][WIDTH], int x, int y, char c) {
    if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT) {
        canvas[y][x] = c;
    } else {
        printf("Coordinates out of bounds!\n");
    }
}

// Function to draw a horizontal line on the canvas
void drawHorizontalLine(char canvas[HEIGHT][WIDTH], int y, char c) {
    if (y >= 0 && y < HEIGHT) {
        for (int x = 0; x < WIDTH; ++x) {
            canvas[y][x] = c;
        }
    } else {
        printf("Y-coordinate out of bounds!\n");
    }
}

// Function to draw a vertical line on the canvas
void drawVerticalLine(char canvas[HEIGHT][WIDTH], int x, char c) {
    if (x >= 0 && x < WIDTH) {
        for (int y = 0; y < HEIGHT; ++y) {
            canvas[y][x] = c;
        }
    } else {
        printf("X-coordinate out of bounds!\n");
    }
}

int main() {
    // Create the canvas
    char canvas[HEIGHT][WIDTH];
    
    // Initialize the canvas
    initializeCanvas(canvas);
    
    // Draw some characters and lines on the canvas
    drawChar(canvas, 5, 5, 'R');
    drawHorizontalLine(canvas, 2, '-');
    drawVerticalLine(canvas, 10, '|');
    
    // Print the canvas to the console
    printCanvas(canvas);
    
    return 0;
}
