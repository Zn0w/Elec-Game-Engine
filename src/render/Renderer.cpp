#include "Renderer.h"

Renderer::Renderer() {

}

Renderer::~Renderer() {

}

void Renderer::render(sf::RenderWindow& window) {
    //std::vector<GameObject*> GameObject::objects;

    for (int i = 0; i < GameObject::objects.size(); i++) {
        GameObject* object = GameObject::objects.at(i);

        if (object->isVisible())
            window.draw(object->draw());
    }
}
