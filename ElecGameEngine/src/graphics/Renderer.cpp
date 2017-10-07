#include "Renderer.h"

namespace elec {
	Renderer::Renderer() {

	}

	Renderer::~Renderer() {

	}

	void Renderer::init(int width, int height) {
		glMatrixMode(GL_PROJECTION);
		glOrtho(0, width, height, 0, 1, -1);
		glMatrixMode(GL_MODELVIEW);
		glEnable(GL_TEXTURE_2D);
	}
	
	void Renderer::render() {	
		for (GameEntity* entity : GameEntity::entities) {
			if (entity->isRendering())
				entity->draw();
		}
	}

	void Renderer::clear() {
		glClear(GL_COLOR_BUFFER_BIT);
	}
}