#include "Game.h"

#include <iostream>

Game::Game(int winW, int winH, std::string title) {
    display = new Display(winW, winH, title);
    std::cout << "In game class called display\n";
}

Game::~Game() {

}

void Game::start() {

}
