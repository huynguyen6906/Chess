#include <SDL2/SDL.h>

bool init(SDL_Window* window, SDL_Renderer* render, bool& running, const char* title, int xpos, int ypos, int height, int width, int flags){
    if(SDL_Init(SDL_INIT_EVERYTHING)==0){
        window=SDL_CreateWindow(title, xpos, ypos, height, width, SDL_WINDOW_SHOWN);
        if(window){
            render=SDL_CreateRenderer(window, -1, 0);
            if(render){
                SDL_SetRenderDrawColor(render,0,0,0,255);
            }
            else
                return false;
        }
        else 
            return false;
    }
    else 
        return false;
    running=true;
    return true;
}