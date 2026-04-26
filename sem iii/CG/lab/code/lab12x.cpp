#include <stdio.h>
#include <graphics.h>

void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

void reflectX(int *x, int *y, int y_axis) {
    *y = 2 * y_axis - *y; // reflection about horizontal line y = y_axis
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 100;
    int x3 = 150, y3 = 200;

    // Draw original triangle
    drawTriangle(x1, y1, x2, y2, x3, y3);

    int y_axis = 300; // reflection line y = 300 (can be adjusted)

    // Reflect about x-axis (horizontal line)
    reflectX(&y1, &y1, y_axis);
    reflectX(&y2, &y2, y_axis);
    reflectX(&y3, &y3, y_axis);

    // Draw reflected triangle
    drawTriangle(x1, y1, x2, y2, x3, y3);

    getch();
    closegraph();
    return 0;
}