#pragma once

#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace elec {
	class Window {

	private:
		const char* title;
		int width;
		int height;
		GLFWwindow* window;

	public:
		Window(const char* windowTitle, int windowWidth, int windowHeight);
		~Window();

		bool closed() const;
		void clear() const;
		void update() const;

	private:
		void init();

	};
}