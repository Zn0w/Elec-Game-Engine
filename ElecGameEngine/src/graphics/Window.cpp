#include "Window.h"

#include <GLFW/glfw3.h>

Window::Window(const char* windowTitle, int windowWidth, int windowHeight)
	: title(windowTitle), width(windowWidth), height(windowHeight)
{
	init();
}

Window::~Window() {
	glfwTerminate();
}

void Window::init() {
	if (!glfwInit())
		return;

	window = glfwCreateWindow(width, height, title, NULL, NULL);
	if (!window) {
		glfwTerminate();
		return;
	}

	glfwMakeContextCurrent(window);
}

bool Window::closed() const {
	return glfwWindowShouldClose(window);
}

void Window::clear() const {
	glClear(GL_COLOR_BUFFER_BIT);
}

void Window::update() const {
	glfwSwapBuffers(window);
	glfwPollEvents();
}