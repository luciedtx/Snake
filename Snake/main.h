#pragma once

SDL_Renderer* renderer;
SDL_Window* window;

void initialise();
void createWindow();
void createRender();

void freeAll();

void manageRect();

int xSnake = 10;
int ySnake = 150;
int widthSnake = 50;
int lengthSnake = 50;
int dxSnake = 0;
int dySnake = 0;

int xFood = 150;
int yFood = 150;
int widthFood = 50;
int lengthFood = 50;

