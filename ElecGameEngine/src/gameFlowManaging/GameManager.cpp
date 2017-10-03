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

		while (!window->closed()) {
			window->clear();
			renderer.render();
			window->update();
		}
	}
}