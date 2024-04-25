#include <stdio.h>
#include "pe.h"
#define X_AXIS 200
#define Y_AXIS 200
#define MYFILENAME "tulainovd.ppm"


int create_ppm(char array[Y_AXIS][X_AXIS]);

int main() {

//    Create 2D array to represent the pixels of the image
    char pixels[Y_AXIS][X_AXIS];

    for (int i = 0; i < Y_AXIS; i++) {
        for (int j = 0; j < X_AXIS; j++) {
            pixels[i][j] = '.';
        }
    }

//    define the center, radius and color
    int x_c = X_AXIS / 2;
    int y_c = Y_AXIS / 2;
    int radius = X_AXIS / 2 - 1;
    char color = 'X';

//    Draw circle and triangles
    drawCircle(x_c, y_c, radius, color, pixels);
    drawTriangles(x_c, y_c, radius, 8, color, pixels);

//    Open 2D array in .ppm file
    create_ppm(pixels);

    return 0;
}

int create_ppm(char pixels[X_AXIS][Y_AXIS]) {

//    Open .ppm files for writing.
    FILE *p_file = fopen(MYFILENAME, "w");
    if (NULL != p_file) {

        fprintf(p_file, "P3\n%d %d\n255\n", X_AXIS, Y_AXIS);

//        Convert the character to RGB color
        for (int i = 0; i < Y_AXIS; i++) {
            for (int j = 0; j < X_AXIS; j++) {
                int r, g, b;
                char color = pixels[i][j];
                if (color == 'X') {
                    r = 0, g = 0, b = 0; // Black
                } else if (color == '.') {
                    r = 255, g = 255, b = 255; // White
                } else {
                    r = 0, g = 0, b = 0; // Black
                }
                fprintf(p_file, "%d %d %d ", r, g, b);
            }
            fprintf(p_file, "\n");
        }

//        Close .ppm
        fclose(p_file);
        return 0;
    } else {
        return 1;
    }
}
