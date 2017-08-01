#include "Display.h"

#include <iostream>

Display::Display(int width, int height, std::string title) : window(sf::VideoMode(width, height), title) {
    this->width = width;
    this->height = height;
    this->title = title;
}

Display::~Display() {

}

void Display::update() {
    if (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                destroy();
        }

        window.clear(sf::Color::Black);

        renderer.render(window);

        window.display();
    }
}

void Display::destroy() {
    window.close();
}

bool Display::isActive() {
    return window.isOpen();
}
