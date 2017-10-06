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

		/*glBegin(GL_TRIANGLES);
		glVertex2f(0, 0);
		glVertex2f(0, 15);
		glVertex2f(15, 15);
		glVertex2f(0, 0);
		glVertex2f(15, 0);
		glVertex2f(15, 15);
		glEnd();*/
	}
}