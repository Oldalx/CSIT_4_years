#include <stdio.h>
#include <graphics.h>
#include <math.h>

void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

void rotate(int *x, int *y, float angle, int xr, int yr) {
    float rad = angle * (M_PI / 180.0);
    int x_temp = *x - xr;
    int y_temp = *y - yr;
    
    *x = xr + round(x_temp * cos(rad) - y_temp * sin(rad));
    *y = yr + round(x_temp * sin(rad) + y_temp * cos(rad));
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 150, y1 = 100;
    int x2 = 250, y2 = 100;
    int x3 = 200, y3 = 200;

    // Draw original triangle
    drawTriangle(x1, y1, x2, y2, x3, y3);

    float angle = 45.0; // rotation angle in degrees
    int xr = 200, yr = 150; // rotation point

    // Rotate triangle
    rotate(&x1, &y1, angle, xr, yr);
    rotate(&x2, &y2, angle, xr, yr);
    rotate(&x3, &y3, angle, xr, yr);

    // Draw rotated triangle
    drawTriangle(x1, y1, x2, y2, x3, y3);

    getch();
    closegraph();
    return 0;
}