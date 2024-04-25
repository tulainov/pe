#ifndef CIRCLE_DRAWLINE_H
#define CIRCLE_DRAWLINE_H
#define X_AXIS 200
#define Y_AXIS 200
#define RADIUS 97

void setPixel(int x, int y, char color, char array[Y_AXIS][X_AXIS]);
void calculatePoints(int x_c, int y_c, int radius, int N, int points[N][2]);
void drawLine(int x1, int y1, int x2, int y2, char color, char array[Y_AXIS][X_AXIS]);

#endif //CIRCLE_DRAWLINE_H
