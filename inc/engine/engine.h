#ifndef ENGINE
#define ENGINE

#include <SDL2/SDL.h>

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
};

#endif