#pragma once

#include "GLFW/glfw3.h"

namespace elec {
	class KeyboardInput {

	private:
		static GLFWwindow* window;
	
	public:
		static void listenTo(GLFWwindow* w);
		static bool isKeyPressed(int keycode);
		static bool isKeyReleased(int keycode);

	};
}