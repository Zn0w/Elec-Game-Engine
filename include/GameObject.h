#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>
#include <vector>

#include <SFML/Graphics.hpp>

class GameObject {

    public:
        GameObject(int x, int y, int width, int height);
        GameObject(int x, int y, int width, int height, std::string tag);
        virtual ~GameObject();

        sf::RectangleShape draw();
        virtual void update() = 0;

        void setX(int x);
        int getX();
        void setY(int y);
        int getY();
        void setWidth(int width);
        int getWidth();
        void setHeight(int height);
        int getHeight();

        static std::vector<GameObject*> objects;

        void setActive();
        void setInactive();
        bool isActive();

        void setVisible();
        void setInvisible();
        bool isVisible();

    protected:
        int x, y, width, height;
        bool active = true;
        bool visible = true;
        std::string tag;

};

#endif // GAMEOBJECT_H
