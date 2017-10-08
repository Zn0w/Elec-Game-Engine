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
}