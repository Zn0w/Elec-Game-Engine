#include "Window.h"

#include <GLFW/glfw3.h>

Window::Window(const char* windowTitle, int windowWidth, int windowHeight)
	: title(windowTitle), width(windowWidth), height(windowHeight)
{
	init();
}

Window::~Window() {

}

void Window::init() {
	GLFWwindow* window;

	if (!glfwInit())
		std::cout << "GLFW error" << std::endl;

	window = glfwCreateWindow(width, height, title, NULL, NULL);
	if (!window) {
		glfwTerminate();
	}

	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window)) {
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);

		glfwPollEvents();
	}

	glfwTerminate();
}