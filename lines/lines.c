

void drawLine(int x1, int y1, int x2, int y2, char color, char array[SIZE][SIZE]) {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1;
    int err = dx - dy;

    while(1) {
        setPixel(x1, y1, color, array);

        if (x1 == x2 && y1 == y2)
            break;

        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x1 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y1 += sy;
        }
    }
}


void drawLines(int x_c, int y_c, int N, int points[N][2], char color, char array[SIZE][SIZE]) {
    for (int i = 0; i < N; i++) {
        drawLine(x_c, y_c, points[i][0], points[i][1], color, array);
    }
}

