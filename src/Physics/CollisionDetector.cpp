#include "CollisionDetector.h"

CollisionDetector::CollisionDetector() {

}

CollisionDetector::~CollisionDetector() {

}

bool CollisionDetector::isCollide(GameObject& object, GameObject& other) {
    return (object.getX() + object.getWidth() >= other.getX() && object.getY() + object.getHeight() >= other.getY() &&
        object.getX() <= other.getX() + other.getWidth() && object.getY() <= other.getY() + other.getHeight());
}

bool CollisionDetector::isCollisionSideRight(GameObject& object, GameObject& other) {
    return (object.getX() + object.getWidth() >= other.getX() && object.getX() + object.getWidth() <= other.getX() + other.getWidth() &&
        object.getX() < other.getX() && object.getY() + object.getHeight() >= other.getY() && object.getY() <= other.getY() + other.getHeight());
}

bool CollisionDetector::isCollisionSideLeft(GameObject& object, GameObject& other) {
    return (object.getX() >= other.getX() && object.getX() <= other.getX() + other.getWidth() &&
            object.getY() + object.getHeight() >= other.getY() && object.getY() <= other.getY() + other.getHeight());
}

bool CollisionDetector::isCollisionSideTop(GameObject& object, GameObject& other) {
    return (object.getY() >= other.getY() && object.getY() + object.getHeight() <= other.getY() + other.getHeight() &&
            object.getX() <= other.getX() + other.getWidth() && object.getX() + object.getWidth() >= other.getX());
}

bool CollisionDetector::isCollisionSideBottom(GameObject& object, GameObject& other) {
    return (object.getY() + object.getHeight() >= other.getY() && object.getY() + object.getHeight() <= other.getY() + other.getHeight() &&
            object.getX() <= other.getX() + other.getWidth() && object.getX() + object.getWidth() >= other.getX());
}
