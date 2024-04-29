#define X_AXIS 200
#define Y_AXIS 200


void setPixel(int x, int y, char color, char array[Y_AXIS][X_AXIS]) {
//    Check if the coordinates are within the bounds of the array
    if (x >= 0 && x < Y_AXIS && y >= 0 && y < X_AXIS) {
//        Set the pixel at (x, y) to the specified color
        array[y][x] = color;
    }
}
