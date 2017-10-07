#include "Window.h"

namespace elec {
	Window::Window(const char* windowTitle, int windowWidth, int windowHeight)
		: title(windowTitle), width(windowWidth), height(windowHeight)
	{
		if (!init())
			glfwTerminate();
	}

	Window::~Window() {
		glfwTerminate();
	}

	bool Window::init() {
		if (!glfwInit()) {
			std::cout << "Failed to initialize GLFW\n";
			return false;
		}

		window = glfwCreateWindow(width, height, title, NULL, NULL);
		if (!window) {
			std::cout << "Failed to create window\n";
			return false;
		}

		glfwMakeContextCurrent(window);

		if (glewInit() != GLEW_OK) {
			std::cout << "Failed to initialize GLEW\n";
			return false;
		}

		KeyboardInput::listenTo(window);

		return true;
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
}