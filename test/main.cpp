#include "TestGame.h"
#include "Box.h"

int main() {
    TestGame game(1280, 720, "Test game");

    Box box1(35, 400, 120, 75);
    Box box2(700, 250, 100, 100);

    game.start();

    return 0;
}
