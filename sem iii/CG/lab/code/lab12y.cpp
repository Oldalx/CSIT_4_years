#include <stdio.h>
#include <graphics.h>

void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

void reflectY(int *x, int *y, int x_axis) {
    *x = 2 * x_axis - *x; // reflection about vertical line x = x_axis
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 100;
    int x3 = 150, y3 = 200;

    // Draw original triangle
    drawTriangle(x1, y1, x2, y2, x3, y3);

    int x_axis = 300; // reflection line x = 300 (can be adjusted)

    // Reflect about y-axis (vertical line)
    reflectY(&x1, &y1, x_axis);
    reflectY(&x2, &y2, x_axis);
    reflectY(&x3, &y3, x_axis);

    // Draw reflected triangle
    drawTriangle(x1, y1, x2, y2, x3, y3);

    getch();
    closegraph();
    return 0;
}