#pragma once

#include <GLFW/glfw3.h>

namespace elec {
	class GameEntity {
	
	private:
		bool updating;
		bool rendering;

	public:
		GameEntity();
		~GameEntity();

		void draw();
		virtual void update() = 0;

		bool isUpdating();
		bool isRendering();

		void enableUpdating();
		void disableUpdating();

		void enableRendering();
		void disableRendering();
	};
}