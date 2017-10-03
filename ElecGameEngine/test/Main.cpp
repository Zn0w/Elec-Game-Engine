#include "../src/graphics/Window.h"
#include "../src/gameFlowManaging/Game.h"
#include "../src/gameFlowManaging/GameManager.h"

#include <iostream>

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

int main(void)
{
	elec::Window window("Test window", 640, 480);
	
	MyGame g;

	elec::GameManager gameManager(&g, &window);
	gameManager.start();

	return 0;
}