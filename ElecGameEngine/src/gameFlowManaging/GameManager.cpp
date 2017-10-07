#include "GameManager.h"

namespace elec {
	GameManager::GameManager(Game* g, Window* w)
		: game(g), window(w)
	{

	}

	GameManager::~GameManager() {

	}
	
	void GameManager::start() {
		game->init();
		renderer.init(window->getWidth(), window->getHeight());

		double previousTime = glfwGetTime();
		double currentTime;
		int frameCount = 0;
		
		while (!window->closed() && game->isRunning()) {
			game->update();
			
			for (GameEntity* entity : GameEntity::entities) {
				if (entity->isUpdating())
					entity->update();
			}

			renderer.clear();
			renderer.render();

			currentTime = glfwGetTime();
			frameCount++;
			if (currentTime - previousTime >= 1.0) {
				std::cout << "FPS: " << frameCount << std::endl;
				frameCount = 0;
				previousTime = currentTime;
			}
			
			window->update();
		}

		game->destroy();
	}
}