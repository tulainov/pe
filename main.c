#include <stdio.h>
#include "pe.h"

#define SIZE 20
#define N 8

int main() {
    char array[SIZE][SIZE] = {0};
    int x_c = SIZE / 2;
    int y_c = SIZE / 2;
    int radius = SIZE / 2 - 1;
    char color = '1';

    drawCircle(x_c, y_c, radius, color, array);

    int points[N][2];
    calculatePoints(x_c, y_c, radius, N, points);
    drawLines(x_c, y_c, N, points, color, array);

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", array[i][j] ? array[i][j] : ' ');
        }
        printf("\n");
    }

    return 0;
}
