#include "drawTriangle.h"


void drawTriangles(int x_c, int y_c, int radius, int N, char color, char array[Y_AXIS][X_AXIS]) {

//    Calculate points on the circle
    int points[N][2];
    calculatePoints(x_c, y_c, radius, N, points);

    // Draw lines for each triangle
    drawLine(points[0][0], points[0][1], points[3][0], points[3][1], color, array);
    drawLine(points[0][0], points[0][1], points[5][0], points[5][1], color, array);
    drawLine(points[3][0], points[3][1], points[5][0], points[5][1], color, array);

    drawLine(points[2][0], points[2][1], points[5][0], points[5][1], color, array);
    drawLine(points[2][0], points[2][1], points[7][0], points[7][1], color, array);
    drawLine(points[5][0], points[5][1], points[7][0], points[7][1], color, array);

    drawLine(points[4][0], points[4][1], points[7][0], points[7][1], color, array);
    drawLine(points[4][0], points[4][1], points[1][0], points[1][1], color, array);
    drawLine(points[7][0], points[7][1], points[1][0], points[1][1], color, array);

    drawLine(points[6][0], points[6][1], points[1][0], points[1][1], color, array);
    drawLine(points[6][0], points[6][1], points[3][0], points[3][1], color, array);
    drawLine(points[1][0], points[1][1], points[3][0], points[3][1], color, array);
}
