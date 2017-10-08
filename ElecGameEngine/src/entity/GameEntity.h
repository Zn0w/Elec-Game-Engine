#pragma once

#include <GLFW/glfw3.h>
#include <vector>

namespace elec {
	class GameEntity {
	
	protected:
		bool updating = true;
		bool rendering = true;

		int x, y, width, height;

		const char* tag;

	public:
		static std::vector<GameEntity*> entities;

	public:
		GameEntity(int xPos, int yPos, int w, int h, const char* t);
		~GameEntity();

		void draw();
		virtual void update() = 0;

		bool isUpdating();
		bool isRendering();

		void enableUpdating();
		void disableUpdating();

		void enableRendering();
		void disableRendering();

		int getX();
		int getY();

		int getWidth();
		int getHeight();
	};
}