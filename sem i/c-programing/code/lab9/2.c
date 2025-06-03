#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    rectangle(150, 100, 400, 300); // Top-left (150,100) to Bottom-right (400,300)

    getch();
    closegraph();
    return 0;
}
