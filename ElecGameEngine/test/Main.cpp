#include <iostream>

#include "../src/graphics/Window.h"
#include "../src/gameFlowManaging/Game.h"
#include "../src/gameFlowManaging/GameManager.h"
#include "../src/entity/GameEntity.h"

class MyGame : public elec::Game {
public:
	void init() {
		std::cout << "game init\n";
	}

	void update() {
		std::cout << "game update\n";
	}

	void destroy() {
		std::cout << "game destroy\n";
	}
};

class MyEntity : public elec::GameEntity {
public:
	MyEntity(int x, int y, int w, int h, const char* t) : elec::GameEntity(x, y, w, h, t) {

	}
	
	void update() {
		std::cout << "Entity update\n";
	}
};

int main(void)
{
	elec::Window window("Test window", 640, 480);
	
	MyEntity entity(-1, -1, 2, 2, "player");

	MyGame g;

	elec::GameManager gameManager(&g, &window);
	gameManager.start();

	return 0;
}