#include "CollisionDetector.h"

namespace elec {
	bool CollisionDetector::isColliding(GameEntity* thisEntity, GameEntity* otherEntity) {
		return thisEntity->getX() + thisEntity->getWidth() >= otherEntity->getX() &&
			thisEntity->getX() <= otherEntity->getX() + otherEntity->getWidth() && 
			thisEntity->getY() + thisEntity->getHeight() >= otherEntity->getY() &&
			thisEntity->getY() <= otherEntity->getY() + otherEntity->getHeight();
	}
}