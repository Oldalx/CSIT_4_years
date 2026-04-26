#include <stdio.h>
#include <graphics.h>

void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

void scale(int *x, int *y, float sx, float sy, int xf, int yf) {
    *x = xf + round((*x - xf) * sx);
    *y = yf + round((*y - yf) * sy);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 100;
    int x3 = 150, y3 = 200;

    // Draw original triangle
    drawTriangle(x1, y1, x2, y2, x3, y3);

    float sx = 1.5, sy = 1.5; // scaling factors
    int xf = 150, yf = 150;   // fixed point (center)

    // Scale triangle
    scale(&x1, &y1, sx, sy, xf, yf);
    scale(&x2, &y2, sx, sy, xf, yf);
    scale(&x3, &y3, sx, sy, xf, yf);

    // Draw scaled triangle
    drawTriangle(x1, y1, x2, y2, x3, y3);

    getch();
    closegraph();
    return 0;
}