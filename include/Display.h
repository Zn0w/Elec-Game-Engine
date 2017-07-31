#ifndef DISPLAY_H
#define DISPLAY_H

#include <string>

#include <SFML/Graphics.hpp>

class Display {

    public:
        Display(int width, int height, std::string title);
        virtual ~Display();

        void update();
        void destroy();

        bool isActive();

    private:
        int width;
        int height;
        std::string title;

        sf::RenderWindow window;

};

#endif // DISPLAY_H
