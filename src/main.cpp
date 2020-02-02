#include "../inc/engine/engine.h"

int main()
{
    Engine engine;
    engine.initialize();
    while (engine.getRunning()) {
        engine.events();
        engine.logic();
        engine.update();
        engine.render();
        SDL_Delay(1000/60);
    }
    engine.clean();
    return 0;
}