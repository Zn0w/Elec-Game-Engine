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

        for (int i = 0; i < GameObject::objects.size(); i++) {
            GameObject* object = GameObject::objects.at(i);

            if (object->isActive())
                object->update();
        }

        display.update();
    }

    destroy();
}
