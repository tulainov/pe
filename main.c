#include <stdio.h>
#include "pe.h"

#define SIZE 20
#define RADIUS 9
#define X_C 9
#define Y_C 9


char array[SIZE][SIZE];


int main() {

    drawCircle(X_C, Y_C, 'R', array);
}
