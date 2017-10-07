#include <iostream>

#include "../src/graphics/Window.h"
#include "../src/gameFlowManaging/Game.h"
#include "../src/gameFlowManaging/GameManager.h"
#include "../src/entity/GameEntity.h"
#include "../src/input/KeyboardInput.h"

class MyGame : public elec::Game {
public:
	void init() {
		std::cout << "game init\n";
	}

	void update() {
		if (elec::KeyboardInput::isKeyPressed(56))
			std::cout << "Key '8' is pressed!\n";
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
		std::cout << "Entity update " << tag << std::endl;
	}
};

int main(void)
{
	elec::Window window("Test window", 640, 480);
	
	MyEntity entity(250, 200, 100, 35, "player");

	MyGame g;

	elec::GameManager gameManager(&g, &window);
	gameManager.start();

	return 0;
}