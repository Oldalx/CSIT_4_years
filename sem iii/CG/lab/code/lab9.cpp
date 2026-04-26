#include <stdio.h>
#include <graphics.h>

void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

void translate(int *x1, int *y1, int *x2, int *y2, int *x3, int *y3, int dx, int dy) {
    *x1 += dx;
    *y1 += dy;
    *x2 += dx;
    *y2 += dy;
    *x3 += dx;
    *y3 += dy;
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 100;
    int x3 = 150, y3 = 200;

    // Draw original triangle
    drawTriangle(x1, y1, x2, y2, x3, y3);

    int dx = 50, dy = 50;

    // Translate triangle
    translate(&x1, &y1, &x2, &y2, &x3, &y3, dx, dy);

    // Draw translated triangle
    drawTriangle(x1, y1, x2, y2, x3, y3);

    getch();
    closegraph();
    return 0;
}