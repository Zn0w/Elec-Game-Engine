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

private:
	int speedX = 1;
	int speedY = 1;

public:
	MyEntity(int x, int y, int w, int h, const char* t) : elec::GameEntity(x, y, w, h, t) {

	}
	
	void update() {
		x += speedX;
		y += speedY;

		if (x + width >= 640 || x <= 0)
			speedX *= -1;

		if (y + height >= 480 || y <= 0)
			speedY *= -1;
		
		/*if (elec::KeyboardInput::isKeyPressed(262)) // Right arrow key
			x += 1;
		
		if (elec::KeyboardInput::isKeyPressed(263)) // Left arrow key
			x -= 1;

		if (elec::KeyboardInput::isKeyPressed(264)) // Down arrow key
			y += 1;
		if (elec::KeyboardInput::isKeyPressed(265)) // Up arrow key
			y -= 1;*/
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