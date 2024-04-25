#ifndef PE_PE_H
#define PE_PE_H

#define X_AXIS 200
#define Y_AXIS 200

void setPixel(int x, int y, char color, char array[Y_AXIS][X_AXIS]);
void drawCircle(int x_c, int y_c, int radius, char color, char array[Y_AXIS][X_AXIS]);
void drawLines(int x_c, int y_c, int radius, int N, char color, char array[Y_AXIS][X_AXIS]);
void drawTriangles(int x_c, int y_c, int radius, int N, char color, char array[Y_AXIS][X_AXIS]);

#endif //PE_PE_H
