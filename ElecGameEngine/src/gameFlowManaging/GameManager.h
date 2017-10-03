#pragma once

#include "Game.h"

namespace elec {
	class GameManager {

	private:
		Game* game;

	public:
		GameManager(Game* g);
		~GameManager();
		
		void start();

	};
}