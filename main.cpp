#include <SDL2/SDL.h>
#include "ProjectLib.h"

SDL_Window* Window=0;
SDL_Renderer* Renderer=0;
bool running=false;


void render(){
    SDL_SetRenderDrawColor(Renderer,0,0,0,255);
    SDL_RenderClear(Renderer);
    SDL_RenderPresent(Renderer);
}

int main(int argc, char* argv[]){

    // Init Window
    if(init(Window, Renderer, running,"My window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 600, SDL_WINDOW_SHOWN))
        running = true;
    else 
        return 1;
    
    // Running
    while(running)
        render();

    // Close app
    SDL_DestroyWindow(Window);
    SDL_DestroyRenderer(Renderer);
    SDL_Quit();
    return 0;
}