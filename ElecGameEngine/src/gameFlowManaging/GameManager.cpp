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

		while (!window->closed() && game->isRunning()) {
			game->update();
			renderer.clear();
			renderer.render();
			window->update();
		}

		game->destroy();
	}
}