#include <stdio.h>
#include <graphics.h>

// Function to draw a triangle using the line() function
void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

// 4-connected boundary fill algorithm
void boundaryFill4(int x, int y, int fillColor, int boundaryColor) {
    // Check if current pixel is within screen bounds
    if (x < 0 || x >= getmaxx() || y < 0 || y >= getmaxy()) {
        return;
    }
    // Get the current color of the pixel
    int currentColor = getpixel(x, y);
    
    // If the pixel is not the boundary and not already filled, proceed
    if (currentColor != boundaryColor && currentColor != fillColor) {
        putpixel(x, y, fillColor); // Fill the pixel
        
        // Recursively call for 4-connected neighbors
        boundaryFill4(x + 1, y, fillColor, boundaryColor); // Right
        boundaryFill4(x - 1, y, fillColor, boundaryColor); // Left
        boundaryFill4(x, y + 1, fillColor, boundaryColor); // Bottom
        boundaryFill4(x, y - 1, fillColor, boundaryColor); // Top
    }
}

// 8-connected boundary fill algorithm
void boundaryFill8(int x, int y, int fillColor, int boundaryColor) {
    if (x < 0 || x >= getmaxx() || y < 0 || y >= getmaxy()) {
        return;
    }
    int currentColor = getpixel(x, y);
    if (currentColor != boundaryColor && currentColor != fillColor) {
        putpixel(x, y, fillColor);
        
        // Recursively call for all 8-connected neighbors
        boundaryFill8(x + 1, y, fillColor, boundaryColor); // Right
        boundaryFill8(x - 1, y, fillColor, boundaryColor); // Left
        boundaryFill8(x, y + 1, fillColor, boundaryColor); // Bottom
        boundaryFill8(x, y - 1, fillColor, boundaryColor); // Top
        boundaryFill8(x + 1, y + 1, fillColor, boundaryColor); // Bottom-Right
        boundaryFill8(x - 1, y + 1, fillColor, boundaryColor); // Bottom-Left
        boundaryFill8(x + 1, y - 1, fillColor, boundaryColor); // Top-Right
        boundaryFill8(x - 1, y - 1, fillColor, boundaryColor); // Top-Left
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics mode
    
    // Draw a triangle as the boundary for 4-connected fill
    int x1 = 100, y1 = 100;
    int x2 = 250, y2 = 300;
    int x3 = 400, y3 = 100;
    drawTriangle(x1, y1, x2, y2, x3, y3);
    
    // Define colors
    int boundaryColor = WHITE; // Color of the drawn triangle
    int fillColor1 = GREEN;    // Color for 4-connected fill
    
    // Get a seed point inside the triangle (centroid approximation)
    int seedX = (x1 + x2 + x3) / 3;
    int seedY = (y1 + y2 + y3) / 3;
    
    printf("Filling triangle with 4-connected algorithm...\n");
    boundaryFill4(seedX, seedY, fillColor1, boundaryColor);
    getch(); // Wait to see the 4-connected fill
    
    cleardevice(); // Clear screen for next demonstration
    
    // Draw a rectangle for 8-connected fill demonstration
    printf("Drawing rectangle for 8-connected fill...\n");
    rectangle(150, 150, 350, 350);
    
    int fillColor2 = RED; // Color for 8-connected fill
    printf("Filling rectangle with 8-connected algorithm...\n");
    boundaryFill8(250, 250, fillColor2, WHITE); // Seed at center
    
    getch();
    closegraph(); // Close graphics mode
    return 0;
}