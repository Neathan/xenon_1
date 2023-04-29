#pragma once

#include <GLFW/glfw3.h>

namespace xe {
	class Application {
	public:
		Application(int width, int height);
		void run();

	private:
		GLFWwindow *m_window = nullptr;
		int m_width = 0, m_height = 0;
	};
}

