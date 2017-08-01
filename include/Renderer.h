#ifndef RENDERER_H
#define RENDERER_H

#include <vector>

#include <SFML/Graphics.hpp>

#include "GameObject.h"

class Renderer {

    public:
        Renderer();
        virtual ~Renderer();

        void render(sf::RenderWindow& window);

    private:


};

#endif // RENDERER_H
