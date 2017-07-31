#ifndef GAME_H
#define GAME_H

#include <string>
#include <cstddef>

#include "Display.h"

class Game {

    public:
        Game(int winW, int winH, std::string title);
        virtual ~Game();

        void start();
        virtual void update() = 0;
        virtual void destroy() = 0;

    private:
        Display display;
        bool isRunning;

};

#endif // GAME_H
