#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "drawCircle.h"

void drawCircle(int x_c, int y_c, int radius, char color, char array[Y_AXIS][X_AXIS]) {

//    Calculate the initial values for the circle drawing algorithm
    int x = radius;
    int y = 0;
    int err = 0;

//    Draw the circle
    while (x >= y) {
        setPixel(x_c + x, y_c + y, color, array);
        setPixel(x_c + y, y_c + x, color, array);
        setPixel(x_c - y, y_c + x, color, array);
        setPixel(x_c - x, y_c + y, color, array);
        setPixel(x_c - x, y_c - y, color, array);
        setPixel(x_c - y, y_c - x, color, array);
        setPixel(x_c + y, y_c - x, color, array);
        setPixel(x_c + x, y_c - y, color, array);

        if (err <= 0) {
            y += 1;
            err += 2*y + 1;
        }
        if (err > 0) {
            x -= 1;
            err -= 2*x + 1;
        }
    }
}
