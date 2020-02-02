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
    }
    engine.clean();
    return 0;
}