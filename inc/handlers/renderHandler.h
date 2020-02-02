#ifndef RENDER_HANDLER
#define RENDER_HANDLER

#include <SDL2/SDL.h>

class RenderHandler {
public:
    void initialize(SDL_Renderer* renderer);
    void render();
private:
    SDL_Renderer* renderer;
};

#endif