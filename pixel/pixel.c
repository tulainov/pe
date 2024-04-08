#include <stdio.h>
#include <stdlib.h>

#define SIZE 20


void setPixel(int x, int y, char color, char array[SIZE][SIZE]) {

    if (x >= 0 && x < SIZE && y >= 0 && y < SIZE) {
        array[x][y] = color;
    }
}

