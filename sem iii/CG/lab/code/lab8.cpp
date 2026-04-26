#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics mode
    
    // Set background color
    setbkcolor(LIGHTCYAN);
    cleardevice();
    
    // Car Body (main rectangle)
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(100, 250, 500, 350);
    floodfill(150, 300, BLUE);
    
    // Car Top (upper rectangle/cabin)
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    rectangle(150, 200, 450, 250);
    floodfill(200, 220, RED);
    
    // Windows
    setcolor(CYAN);
    setfillstyle(SOLID_FILL, CYAN);
    // Left window
    rectangle(180, 210, 270, 240);
    floodfill(200, 220, CYAN);
    // Right window
    rectangle(330, 210, 420, 240);
    floodfill(350, 220, CYAN);
    
    // Wheels
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    // Left wheel
    circle(180, 360, 30);
    floodfill(180, 360, BLACK);
    // Right wheel
    circle(420, 360, 30);
    floodfill(420, 360, BLACK);
    
    // Wheel rims (inner circles)
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    circle(180, 360, 18);
    floodfill(180, 360, LIGHTGRAY);
    circle(420, 360, 18);
    floodfill(420, 360, LIGHTGRAY);
    
    // Headlights
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    // Front headlight
    circle(490, 290, 12);
    floodfill(490, 290, YELLOW);
    // Rear light
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(110, 290, 12);
    floodfill(110, 290, RED);
    
    // Door outline
    setcolor(WHITE);
    line(250, 250, 250, 340);
    line(350, 250, 350, 340);
    
    // Decorative line on body
    setcolor(WHITE);
    line(100, 280, 500, 280);
    
    // Bumpers
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL, DARKGRAY);
    rectangle(85, 330, 100, 345);
    floodfill(90, 335, DARKGRAY);
    rectangle(500, 330, 515, 345);
    floodfill(505, 335, DARKGRAY);
    
    // Window separator
    setcolor(RED);
    line(300, 210, 300, 240);
    
    // Display text
    setcolor(BLACK);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(180, 400, "Simple Car Graphics");
    
    // Additional details - antenna
    setcolor(BLACK);
    line(200, 200, 200, 180);
    circle(200, 175, 5);
    
    getch();
    closegraph();
    return 0;
}