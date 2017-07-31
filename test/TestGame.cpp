#include "TestGame.h"

TestGame::TestGame(int winW, int winH, std::string title) : Game(winW, winH, title) {

}

TestGame::~TestGame() {

}

void TestGame::update() {
    std::cout << "Game update\n";
}

void TestGame::destroy() {
    std::cout << "Game destroy\n";
}
