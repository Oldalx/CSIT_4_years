#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    line(100, 100, 300, 300); // Draw a line from (100,100) to (300,300)

    getch();
    closegraph();
    return 0;
}
