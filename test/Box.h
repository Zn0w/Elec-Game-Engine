#ifndef BOX_H
#define BOX_H

#include <iostream>

#include "GameObject.h"

class Box : public GameObject {
    public:
        Box(int x, int y, int width, int height);
        virtual ~Box();

        void update();

    private:


};

#endif // BOX_H
