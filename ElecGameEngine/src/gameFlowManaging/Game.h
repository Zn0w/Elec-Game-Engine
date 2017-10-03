#pragma once

namespace elec {
	class Game {

	private:
		bool running = true;
	
	public:
		virtual void init() = 0;
		virtual void update() = 0;
		virtual void destroy() = 0;

		bool isRunning();

	};
}