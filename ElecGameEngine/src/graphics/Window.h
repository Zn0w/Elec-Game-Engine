#pragma once

#include <iostream>

#include <GLFW/glfw3.h>

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