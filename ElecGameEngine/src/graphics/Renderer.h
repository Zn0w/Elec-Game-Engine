#pragma once

#include <GLFW/glfw3.h>

#include "../entity/GameEntity.h"

namespace elec {
	class Renderer {

	private:

	public:
		Renderer();
		~Renderer();

		void render();

	};
}