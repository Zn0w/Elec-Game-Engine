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

    private:
        Display* display;

};

#endif // GAME_H
