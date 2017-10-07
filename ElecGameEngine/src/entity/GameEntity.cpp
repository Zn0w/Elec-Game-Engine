#include "GameEntity.h"

namespace elec {
	std::vector<GameEntity*> GameEntity::entities;
	
	GameEntity::GameEntity(int xPos, int yPos, int w, int h, const char* t) 
		: x(xPos), y(yPos), width(w), height(h), tag(t)
	{
		entities.push_back(this);
	}

	GameEntity::~GameEntity() {

	}

	void GameEntity::draw() {
		glBegin(GL_QUADS);
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex2i(x, y);
		glVertex2i(x + width, y);
		glVertex2i(x + width, y + height);
		glVertex2i(x, y + height);
		glEnd();
	}

	bool GameEntity::isUpdating() {
		return updating;
	}

	bool GameEntity::isRendering() {
		return rendering;
	}

	void GameEntity::enableUpdating() {

	}

	void GameEntity::disableUpdating() {

	}

	void GameEntity::enableRendering() {

	}

	void GameEntity::disableRendering() {

	}
}