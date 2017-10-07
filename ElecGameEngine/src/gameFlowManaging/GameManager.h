#pragma once

#include <iostream>

#include "Game.h"
#include "../graphics/Window.h"
#include "../graphics/Renderer.h"

namespace elec {
	class GameManager {

	private:
		Game* game;
		Window* window;
		Renderer renderer;

	public:
		GameManager(Game* g, Window* w);
		~GameManager();
		
		void start();

	};
}