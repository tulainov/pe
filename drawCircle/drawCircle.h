#ifndef CIRCLE_DRAWCIRCLE_H
#define CIRCLE_DRAWCIRCLE_H

#define X_AXIS 200
#define Y_AXIS 200

void setPixel(int x, int y, char color, char array[Y_AXIS][X_AXIS]);
void drawCircle(int x_c, int y_c, int radius, char color, char array[Y_AXIS][X_AXIS]);

#endif //CIRCLE_DRAWCIRCLE_H
