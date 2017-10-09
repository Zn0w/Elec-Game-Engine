#include "CollisionDetector.h"

namespace elec {
	bool CollisionDetector::isColliding(GameEntity* thisEntity, GameEntity* otherEntity) {
		return thisEntity->getX() + thisEntity->getWidth() >= otherEntity->getX() &&
			thisEntity->getX() <= otherEntity->getX() + otherEntity->getWidth() && 
			thisEntity->getY() + thisEntity->getHeight() >= otherEntity->getY() &&
			thisEntity->getY() <= otherEntity->getY() + otherEntity->getHeight();
	}

	bool CollisionDetector::isColliding(const char * thisTag, const char* otherTag) {
		for (GameEntity* thisEntity : GameEntity::entities) {
			if (thisEntity->getTag() == thisTag) {
				for (GameEntity* otherEntity : GameEntity::entities) {
					if (otherEntity->getTag() == otherTag && isColliding(thisEntity, otherEntity))
						return true;
				}
			}
		}

		return false;
	}

	bool CollisionDetector::isColliding(GameEntity* thisEntity, GameEntity* otherEntity, CollisionSide collisionSide) {
		if (collisionSide == TOP)
			return thisEntity->getY() <= otherEntity->getY() + otherEntity->getHeight() &&
			thisEntity->getY() + thisEntity->getHeight() >= otherEntity->getY() + otherEntity->getHeight() &&
			thisEntity->getX() + thisEntity->getWidth() >= otherEntity->getX() &&
			thisEntity->getX() <= otherEntity->getX() + otherEntity->getWidth();
		else if (collisionSide == BOTTOM)
			return thisEntity->getY() + thisEntity->getHeight() <= otherEntity->getY() + otherEntity->getHeight() &&
			thisEntity->getY() + thisEntity->getHeight() >= otherEntity->getY() &&
			thisEntity->getY() < otherEntity->getY() &&
			thisEntity->getX() + thisEntity->getWidth() >= otherEntity->getX() &&
			thisEntity->getX() <= otherEntity->getX() + otherEntity->getWidth();
		else if (collisionSide == LEFT)
			return thisEntity->getX() >= otherEntity->getX() &&
			thisEntity->getX() <= otherEntity->getX() + otherEntity->getWidth() &&
			thisEntity->getY() + thisEntity->getHeight() >= otherEntity->getY() &&
			thisEntity->getY() <= otherEntity->getY() + otherEntity->getHeight();
		else if (collisionSide == RIGHT)
			return thisEntity->getX() + thisEntity->getWidth() >= otherEntity->getX() &&
			thisEntity->getX() + thisEntity->getWidth() <= otherEntity->getX() + otherEntity->getWidth() &&
			thisEntity->getX() < otherEntity->getX() &&
			thisEntity->getY() + thisEntity->getHeight() >= otherEntity->getY() &&
			thisEntity->getY() <= otherEntity->getY() + otherEntity->getHeight();
	}

	bool CollisionDetector::isColliding(const char* thisTag, const char* otherTag, CollisionSide collisionSide) {
		for (GameEntity* thisEntity : GameEntity::entities) {
			if (thisEntity->getTag() == thisTag) {
				for (GameEntity* otherEntity : GameEntity::entities) {
					if (otherEntity->getTag() == otherTag && isColliding(thisEntity, otherEntity, collisionSide))
						return true;
				}
			}
		}

		return false;
	}
}