#include <graphics.h>
#include <stdio.h>

void scanlinePolygonFill(int polygon[][2], int n) {
    int y, x, i, j;
    int x_intersect[20]; // Array to store intersection points for current scan line
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics mode
    
    // Process each scan line from top to bottom of screen
    for (y = 0; y < getmaxy(); y++) {
        int k = 0; // Counter for number of intersections on current scan line
        
        // Find intersections with all polygon edges
        for (i = 0; i < n; i++) {
            j = (i + 1) % n; // Next vertex (wraps around to first)
            
            // Check if scan line intersects this edge
            if ((polygon[i][1] <= y && polygon[j][1] > y) ||
                (polygon[j][1] <= y && polygon[i][1] > y)) {
                
                // Calculate x-coordinate of intersection point
                x_intersect[k++] = (y - polygon[i][1]) *
                                   (polygon[j][0] - polygon[i][0]) /
                                   (polygon[j][1] - polygon[i][1]) +
                                   polygon[i][0];
            }
        }
        
        // Sort intersection points in ascending order (using bubble sort)
        for (i = 0; i < k - 1; i++) {
            for (j = i + 1; j < k; j++) {
                if (x_intersect[i] > x_intersect[j]) {
                    int temp = x_intersect[i];
                    x_intersect[i] = x_intersect[j];
                    x_intersect[j] = temp;
                }
            }
        }
        
        // Fill pixels between pairs of intersection points
        for (i = 0; i < k; i += 2) {
            for (x = x_intersect[i]; x <= x_intersect[i + 1]; x++) {
                putpixel(x, y, WHITE);
            }
        }
    }
    
    getch();     // Wait for user key press
    closegraph(); // Close graphics mode
}

int main() {
    int numVertices, i;
    int vertices[10][2]; // Array to store up to 10 vertices (x, y)
    
    printf("Enter number of vertices for polygon (maximum 10): ");
    scanf("%d", &numVertices);
    
    printf("Enter the coordinates (x y) for each vertex:\n");
    for (i = 0; i < numVertices; i++) {
        printf("Vertex %d: ", i + 1);
        scanf("%d %d", &vertices[i][0], &vertices[i][1]);
    }
    
    // Call the scanline fill function
    scanlinePolygonFill(vertices, numVertices);
    
    return 0;
}