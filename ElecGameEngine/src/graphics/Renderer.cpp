#include "Renderer.h"

namespace elec {
	Renderer::Renderer() {

	}

	Renderer::~Renderer() {

	}

	void Renderer::render() {
		glBegin(GL_QUADS);
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.5f, -0.5f);
		glVertex2f(0.5f, 0.5f);
		glVertex2f(-0.5f, 0.5f);
		glEnd();
	}
}