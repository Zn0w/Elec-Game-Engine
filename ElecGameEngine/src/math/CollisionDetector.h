#pragma once

#include "../entity/GameEntity.h"

namespace elec {
	class CollisionDetector {

	public:
		enum CollisionSide {
			TOP,
			BOTTOM,
			LEFT,
			RIGHT
		};
		
		static bool isColliding(GameEntity* thisEntity, GameEntity* otherEntity);
		static bool isColliding(GameEntity* thisEntity, const char* tag);

		static bool isColliding(GameEntity* thisEntity, GameEntity* otherEntity, CollisionSide collisionSide);
		static bool isColliding(GameEntity* thisEntity, const char* tag, CollisionSide collisionSide);

	};
}