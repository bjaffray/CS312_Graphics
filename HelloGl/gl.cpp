#ifndef GL_CPP
#define GL_CPP

#define SDL_MAIN_HANDLED
#include “SDL2/SDL.h”
#include “gl.h”

// g++ gl.cpp -lopengl32 -lglew32 -lSDL2 
int main(int argc, char ** argv)
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_WIndow* win = SDL_CreateWindow(“OpenGL Program”, 200, 200, SCREEN_W, SCREEN_H,
 SDL_WINDOW_OPENGL);
    
    

}





#endif 