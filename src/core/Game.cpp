#include "Game.h"

#include <iostream>

Game::Game(int winW, int winH, std::string title) : display(winW, winH, title) {

}

Game::~Game() {

}

void Game::start() {
    isRunning = true;

    while (isRunning) {
        isRunning = display.isActive();

        update();

        display.update();
    }

    destroy();
}
