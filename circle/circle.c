#include <stdio.h>
#include <stdlib.h>
#include "../pe.h"

#define SIZE 20


void drawCircle(int x_c, int y_c, int radius, char color, char array[SIZE][SIZE]) {
    int x = 0;
    int y = radius;
    int d = 3 - 2 * radius;

    while (x <= y) {
        // Set pixels in all octants
        setPixel(x_c + x, y_c + y, color, array);
        setPixel(x_c - x, y_c + y, color, array);
        setPixel(x_c + x, y_c - y, color, array);
        setPixel(x_c - x, y_c - y, color, array);
        setPixel(x_c + y, y_c + x, color, array);
        setPixel(x_c - y, y_c + x, color, array);
        setPixel(x_c + y, y_c - x, color, array);
        setPixel(x_c - y, y_c - x, color, array);

        if (d < 0) {
            d += 4 * x + 6;
        } else {
            d += 4 * (x - y) + 10;
            y--;
        }
        x++;
    }
}