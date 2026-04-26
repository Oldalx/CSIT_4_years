#include <stdio.h>
#include <graphics.h>
#include <math.h>

// Function to draw a hexagon
void drawHexagon(int centerX, int centerY, int radius) {
    int x[6], y[6];
    for (int i = 0; i < 6; i++) {
        x[i] = centerX + radius * cos(i * 60 * 3.14159 / 180);
        y[i] = centerY + radius * sin(i * 60 * 3.14159 / 180);
    }
    
    for (int i = 0; i < 6; i++) {
        line(x[i], y[i], x[(i + 1) % 6], y[(i + 1) % 6]);
    }
}

// 4-connected flood fill algorithm
void floodFill4(int x, int y, int fillColor, int oldColor) {
    // Check if current pixel is within screen bounds
    if (x < 0 || x >= getmaxx() || y < 0 || y >= getmaxy()) {
        return;
    }
    
    // Get current pixel color
    int currentColor = getpixel(x, y);
    
    // If pixel has the old color and is not already filled
    if (currentColor == oldColor && currentColor != fillColor) {
        putpixel(x, y, fillColor); // Fill the pixel
        
        // Recursively fill 4-connected neighbors
        floodFill4(x + 1, y, fillColor, oldColor); // Right
        floodFill4(x - 1, y, fillColor, oldColor); // Left
        floodFill4(x, y + 1, fillColor, oldColor); // Down
        floodFill4(x, y - 1, fillColor, oldColor); // Up
    }
}

// 8-connected flood fill algorithm
void floodFill8(int x, int y, int fillColor, int oldColor) {
    // Check if current pixel is within screen bounds
    if (x < 0 || x >= getmaxx() || y < 0 || y >= getmaxy()) {
        return;
    }
    
    // Get current pixel color
    int currentColor = getpixel(x, y);
    
    // If pixel has the old color and is not already filled
    if (currentColor == oldColor && currentColor != fillColor) {
        putpixel(x, y, fillColor); // Fill the pixel
        
        // Recursively fill all 8-connected neighbors
        floodFill8(x + 1, y, fillColor, oldColor); // Right
        floodFill8(x - 1, y, fillColor, oldColor); // Left
        floodFill8(x, y + 1, fillColor, oldColor); // Down
        floodFill8(x, y - 1, fillColor, oldColor); // Up
        floodFill8(x + 1, y + 1, fillColor, oldColor); // Bottom-right
        floodFill8(x - 1, y + 1, fillColor, oldColor); // Bottom-left
        floodFill8(x + 1, y - 1, fillColor, oldColor); // Top-right
        floodFill8(x - 1, y - 1, fillColor, oldColor); // Top-left
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics mode
    
    // Clear screen and set background
    cleardevice();
    
    // Demonstration 1: 4-connected flood fill on hexagon
    printf("Demonstrating 4-connected Flood Fill Algorithm...\n");
    printf("Drawing a hexagon...\n");
    
    // Draw a hexagon with white boundary
    int centerX = 250, centerY = 250, radius = 100;
    setcolor(WHITE);
    drawHexagon(centerX, centerY, radius);
    
    // Get a point inside the hexagon
    int seedX = centerX;
    int seedY = centerY;
    
    // Old color is BLACK (background), fill color is BLUE
    int oldColor = BLACK;
    int fillColor1 = BLUE;
    
    printf("Filling hexagon with blue using 4-connected method...\n");
    floodFill4(seedX, seedY, fillColor1, oldColor);
    
    getch(); // Wait for key press
    cleardevice(); // Clear screen for next demonstration
    
    // Demonstration 2: 8-connected flood fill on circle
    printf("\nDemonstrating 8-connected Flood Fill Algorithm...\n");
    printf("Drawing a circle...\n");
    
    // Draw a circle with white boundary
    setcolor(WHITE);
    circle(300, 250, 80);
    
    // Get a point inside the circle
    seedX = 300;
    seedY = 250;
    
    // Fill with different color using 8-connected method
    int fillColor2 = RED;
    
    printf("Filling circle with red using 8-connected method...\n");
    floodFill8(seedX, seedY, fillColor2, BLACK);
    
    getch(); // Wait for key press
    closegraph(); // Close graphics mode
    
    return 0;
}