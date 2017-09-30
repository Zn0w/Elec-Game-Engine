#pragma once

#include <iostream>

class Window {

private:
	const char* title;
	int width;
	int height;

	void init();

public:
	Window(const char* name, int width, int height);
	~Window();

};