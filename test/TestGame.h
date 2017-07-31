#ifndef TESTGAME_H
#define TESTGAME_H

#include <iostream>

#include "Game.h"

class TestGame : public Game {

    public:
        TestGame(int winW, int winH, std::string title);
        virtual ~TestGame();

        void update();
        void destroy();

    private:


};

#endif // TESTGAME_H
