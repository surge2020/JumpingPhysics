#ifndef ENGINE
#define ENGINE

#include <SDL2/SDL.h>
#include "../handlers/eventHandler.h"
#include "../handlers/renderHandler.h"

class Engine {
public:
    Engine();
    void initialize();
    bool getRunning();
    void events();
    void logic();
    void update();
    void render();
    void clean();
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool running;
    EventHandler eventHandler;
    RenderHandler renderHandler;
};

#endif