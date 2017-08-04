#include "Box.h"

Box::Box(int x, int y, int width, int height, std::string tag) : GameObject(x, y, width, height, tag) {

}

Box::~Box() {

}

void Box::update() {
    std::cout << "Box update\n";
}
