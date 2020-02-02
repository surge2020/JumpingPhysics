#include "../inc/handlers/eventHandler.h"

void EventHandler::initialize(bool* running)
{
    this->running = running;
}

void EventHandler::input()
{
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT:
            *running = false;
            break;
        default:
            break;
        }
    }
}