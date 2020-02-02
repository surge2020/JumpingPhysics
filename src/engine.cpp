#include "../inc/engine/engine.h"
#include "../inc/engine/window.h"
#include "../inc/engine/renderer.h"

Engine::Engine()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    window = SDL_CreateWindow(
        windowTitle,
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        windowWidth, windowHeight, windowFlags);
    renderer = SDL_CreateRenderer(window, rendererIndex, rendererFlags);
    running = true;
}

void Engine::initialize()
{

}

bool Engine::getRunning()
{
    return running;
}

void Engine::events()
{

}

void Engine::logic()
{

}

void Engine::update()
{

}

void Engine::render()
{

}

void Engine::clean()
{

}