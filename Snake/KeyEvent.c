#include <SDL.h>
#include "main.h"


void KEY_DOWN(SDL_Event event) {
    //Check the SDLKey values and move by changing the coords
    switch (event.key.keysym.sym) {
    case SDLK_z:
        dySnake = -5;
        break;
    case SDLK_s:
        dySnake = 5;
        break;
    }
}

void KEY_UP() {
    // Stop movement when the key is released
    dySnake = 0;
}

void KeyEvent() {
    // Event pour bouger le rect de haut en bas
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        // update pos when key pressed
        switch (event.type)
        {
        case SDL_KEYDOWN:
            KEY_DOWN(event);
            break;
        case SDL_KEYUP:
            KEY_UP();
            break;
        }
    }
}