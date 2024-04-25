#include <math.h>
#include "drawLine.h"

void drawLine(int x1, int y1, int x2, int y2, char color, char array[Y_AXIS][X_AXIS]) {

//    Calculate the differences and signs for the x and y coordinates
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1;
    int err = dx - dy;

//    Draw the line from (x1, y1) to (x2, y2)
    while(1) {
        setPixel(x1, y1, color, array);

        if (x1 == x2 && y1 == y2)
            break;

        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x1 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y1 += sy;
        }
    }
}
