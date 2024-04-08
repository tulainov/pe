#ifndef PE_PE_H
#define PE_PE_H
#define SIZE 20

void calculatePoints(int x_c, int y_c, int radius, int N, int points[N][2]);
void drawCircle(int x_c, int y_c, int radius, char color, char array[SIZE][SIZE]);
void drawLine(int x1, int y1, int x2, int y2, char color, char array[SIZE][SIZE]);
void drawLines(int x_c, int y_c, int N, int points[N][2], char color, char array[SIZE][SIZE]);
void setPixel(int x, int y, char color, char array[SIZE][SIZE]);

#endif //PE_PE_H
