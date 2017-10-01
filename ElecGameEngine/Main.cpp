#include "src/graphics/Window.h"
#include "src/graphics/Renderer.h"

int main(void)
{
	Window window("Test window", 640, 480);
	Renderer renderer;
	
	while (!window.closed()) {
		window.clear();
		renderer.render();
		window.update();
	}

	return 0;
}