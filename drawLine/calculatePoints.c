#include <math.h>

#define PI 3.14159265

void calculatePoints(int x_c, int y_c, int radius, int N, int points[N][2]) {

//    Calculate the points on the circle
    for (int i = 0; i < N; i++) {
        double theta = 2.0 * PI * i / N;
        points[i][0] = x_c + radius * cos(theta);
        points[i][1] = y_c + radius * sin(theta);
    }
}
