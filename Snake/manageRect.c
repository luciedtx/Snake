#include <SDL.h>
#include "main.h"



void manageRect() {
    // dessiner le snake
    SDL_Rect Snake = { xSnake, ySnake, widthSnake,lengthSnake };
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
    SDL_RenderFillRect(renderer, &Snake);
    // dessiner les obstacles
    SDL_Rect Food = { xFood, yFood, widthFood,lengthFood };
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &Food);
}

