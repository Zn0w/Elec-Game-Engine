#include "KeyboardInput.h"

namespace elec {	
	GLFWwindow* KeyboardInput::window;
	
	void KeyboardInput::listenTo(GLFWwindow* w) {
		window = w;
	}
	
	bool KeyboardInput::isKeyPressed(int keycode) {
		return glfwGetKey(window, keycode);
	}

	bool KeyboardInput::isKeyReleased(int keycode) {
		return true;
	}
}