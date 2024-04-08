#ifndef PE_LINES_H
#define PE_LINES_H
#define SIZE 20

void drawLine(int x1, int y1, int x2, int y2, char color, char array[SIZE][SIZE]);
void drawLines(int x_c, int y_c, int N, int points[N][2], char color, char array[SIZE][SIZE]);
void setPixel(int x, int y, char color, char array[SIZE][SIZE]);

#endif //PE_LINES_H
