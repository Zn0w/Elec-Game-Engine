#include "Renderer.h"

namespace elec {
	Renderer::Renderer() {

	}

	Renderer::~Renderer() {

	}

	void Renderer::render() {	
		for (GameEntity* entity : GameEntity::entities) {
			entity->draw();
		}
	}
}