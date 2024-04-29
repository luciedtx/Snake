#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL.h>
#include "main.h"

void UpdatePos() {
    // // update position rectangles
    ySnake += dySnake;
}

int main(int argc, char* argv[]) {

    //configure la sdl, la fenetre et le rendu
    initialise();
    createWindow();
    createRender();
  
    while (1)
    {
        KeyEvent();
        UpdatePos();
        manageRect();
        
        // update render
        SDL_RenderPresent(renderer);

        // Pause for a few milliseconds to control the movement speed
        SDL_Delay(10);
    }

    freeAll();
    return 0;

}