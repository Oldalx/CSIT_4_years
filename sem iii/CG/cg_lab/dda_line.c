#include <SDL2/SDL.h>
#include <stdio.h>
#include <math.h>

// DDA Line Drawing Algorithm
void drawLineDDA(SDL_Renderer* renderer, int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    
    float xIncrement = dx / (float)steps;
    float yIncrement = dy / (float)steps;
    
    float x = x1;
    float y = y1;
    
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255); // Blue color
    
    for(int i = 0; i <= steps; i++) {
        SDL_RenderDrawPoint(renderer, (int)round(x), (int)round(y));
        x += xIncrement;
        y += yIncrement;
    }
}

int main() {
    SDL_Init(SDL_INIT_VIDEO);
    
    SDL_Window* window = SDL_CreateWindow("DDA Line Algorithm - Ubuntu",
                                          SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED,
                                          800, 600, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
    
    // White background
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);
    
    // Draw multiple lines using DDA algorithm
    drawLineDDA(renderer, 100, 100, 700, 100);  // Horizontal line
    drawLineDDA(renderer, 100, 150, 700, 500);  // Diagonal line
    drawLineDDA(renderer, 400, 100, 400, 500);  // Vertical line
    
    SDL_RenderPresent(renderer);
    SDL_Delay(5000);
    
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    return 0;
}
