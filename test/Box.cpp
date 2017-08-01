#include "Box.h"

Box::Box(int x, int y, int width, int height) : GameObject(x, y, width, height) {

}

Box::~Box() {

}

void Box::update() {
    std::cout << "Box update\n";
}
