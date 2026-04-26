#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>
#include <stdio.h>

int main() {
    // Initialize SDL
    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! Error: %s\n", SDL_GetError());
        return -1;
    }
    
    // Create window
    SDL_Window* window = SDL_CreateWindow(
        "Computer Graphics Lab - Ubuntu",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        800, 600,
        SDL_WINDOW_SHOWN
    );
    
    if(window == NULL) {
        printf("Window could not be created! Error: %s\n", SDL_GetError());
        return -1;
    }
    
    // Create renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if(renderer == NULL) {
        printf("Renderer could not be created! Error: %s\n", SDL_GetError());
        return -1;
    }
    
    // Clear screen with white
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // White background
    SDL_RenderClear(renderer);
    
    // Draw a red circle (like circle(300, 300, 50) in graphics.h)
    filledCircleColor(renderer, 300, 300, 50, 0xFF0000FF); // Red circle
    
    // Draw a green rectangle
    boxColor(renderer, 400, 200, 550, 350, 0x00FF00FF); // Green rectangle
    
    // Draw a blue line
    thickLineColor(renderer, 100, 100, 250, 250, 5, 0x0000FFFF); // Blue line
    
    // Draw yellow triangle
    filledTrigonColor(renderer, 600, 100, 700, 200, 500, 200, 0xFFFF00FF); // Yellow triangle
    
    // Update screen
    SDL_RenderPresent(renderer);
    
    // Display text in terminal
    printf("===================================\n");
    printf("Graphics Program Running on Ubuntu\n");
    printf("===================================\n");
    printf("- Red Circle at (300,300) radius 50\n");
    printf("- Green Rectangle\n");
    printf("- Blue Diagonal Line\n");
    printf("- Yellow Triangle\n");
    printf("Window will close in 10 seconds...\n");
    
    // Wait for 10 seconds
    SDL_Delay(10000);
    
    // Clean up
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    printf("Program ended successfully!\n");
    return 0;
}
