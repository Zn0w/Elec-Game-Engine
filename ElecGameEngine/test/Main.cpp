#include <iostream>

#include "../src/graphics/Window.h"
#include "../src/gameFlowManaging/Game.h"
#include "../src/gameFlowManaging/GameManager.h"
#include "../src/entity/GameEntity.h"
#include "../src/input/KeyboardInput.h"
#include "../src/math/CollisionDetector.h"

class MyEntity : public elec::GameEntity {

private:
	int speedX = 1;
	int speedY = 1;

public:
	MyEntity(int x, int y, int w, int h, const char* t) : elec::GameEntity(x, y, w, h, t) {

	}
	
	void update() {
		if (tag == "player") {
			if (elec::KeyboardInput::isKeyPressed(262)) // Right arrow key
				x += 1;

			if (elec::KeyboardInput::isKeyPressed(263)) // Left arrow key
				x -= 1;

			if (elec::KeyboardInput::isKeyPressed(264)) // Down arrow key
				y += 1;

			if (elec::KeyboardInput::isKeyPressed(265)) // Up arrow key
				y -= 1;

			if (elec::CollisionDetector::isColliding("player", "box", elec::CollisionDetector::TOP))
				y += 1;

			if (elec::CollisionDetector::isColliding("player", "box", elec::CollisionDetector::BOTTOM))
				y -= 1;

			if (elec::CollisionDetector::isColliding("player", "box", elec::CollisionDetector::LEFT))
				x += 1;

			if (elec::CollisionDetector::isColliding("player", "box", elec::CollisionDetector::RIGHT))
				x -= 1;
		}
	}

};

class MyGame : public elec::Game {

public:
	void init() {
		std::cout << "game init\n";
	}

	void update() {
		
	}

	void destroy() {
		std::cout << "game destroy\n";
	}

};

int main(void)
{
	elec::Window window("Test window", 640, 480);
	
	MyEntity entity1(250, 200, 100, 35, "player");
	MyEntity entity2(100, 80, 50, 50, "box");

	MyGame g;

	elec::GameManager gameManager(&g, &window);
	gameManager.start();

	return 0;
}