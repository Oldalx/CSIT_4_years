#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    circle(250, 250, 100); // Center at (250,250) with radius 100

    getch();
    closegraph();
    return 0;
}
