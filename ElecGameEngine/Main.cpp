#include "src/graphics/Window.h"

int main(void)
{
	Window window("Test window", 640, 480);
	
	while (!window.closed()) {
		window.clear();
		window.update();
	}

	return 0;
}