#include "CollisionDetector.h"

CollisionDetector::CollisionDetector() {

}

CollisionDetector::~CollisionDetector() {

}

bool CollisionDetector::isCollide(GameObject& object, GameObject& other) {
    if (object.getX() + object.getWidth() >= other.getX() && object.getY() + object.getHeight() >= other.getY() && object.getX() <= other.getX() + other.getWidth() && object.getY() <= other.getY() + other.getHeight())
        return true;
    else
        return false;
}
