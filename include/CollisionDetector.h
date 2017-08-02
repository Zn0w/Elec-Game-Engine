#ifndef COLLISIONDETECTOR_H
#define COLLISIONDETECTOR_H

#include <GameObject.h>

class CollisionDetector
{
    public:
        CollisionDetector();
        virtual ~CollisionDetector();

        static bool isCollide(GameObject& object, GameObject& other);

    private:

};

#endif // COLLISIONDETECTOR_H
