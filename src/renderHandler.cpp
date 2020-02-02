#include "../inc/handlers/renderHandler.h"

void RenderHandler::initialize(SDL_Renderer* renderer)
{
    this->renderer = renderer;
}

void RenderHandler::render()
{
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
}