#include "GameObject.h"

std::vector<GameObject*> GameObject::objects;

GameObject::GameObject(int x, int y, int width, int height) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;

    objects.push_back(this);
}

GameObject::~GameObject() {

}

sf::RectangleShape GameObject::draw() {
    sf::RectangleShape shape;

    shape.setFillColor(sf::Color::Red);
    shape.setSize(sf::Vector2f(width, height));
    shape.setPosition(x, y);

    return shape;
}

void GameObject::setActive() {
    active = true;
}

void GameObject::setInactive() {
    active = false;
}

bool GameObject::isActive() {
    return active;
}

void GameObject::setVisible() {
    visible = true;
}

void GameObject::setInvisible() {
    visible = false;
}

bool GameObject::isVisible() {
    return visible;
}

void GameObject::setX(int x) {
    this->x = x;
}

int GameObject::getX() {
    return x;
}

void GameObject::setY(int y) {
    this->y = y;
}

int GameObject::getY() {
    return y;
}

void GameObject::setWidth(int width) {
    this->width = width;
}

int GameObject::getWidth() {
    return width;
}

void GameObject::setHeight(int height) {
    this->height = height;
}

int GameObject::getHeight() {
    return height;
}
