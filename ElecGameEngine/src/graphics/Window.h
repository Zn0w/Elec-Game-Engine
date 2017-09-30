#pragma once

class Window {
private:
	const char* name;
	int width;
	int height;

public:
	Window(const char* name, int width, int height);
	~Window();
};