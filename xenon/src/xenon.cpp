#include "xenon.h"
#include "GLFW/glfw3.h"

#include <spdlog/spdlog.h>

#include <stdexcept>

namespace xe {
	Application::Application(int width, int height) : m_width(width), m_height(height) {
		if(!glfwInit()) {
			throw std::runtime_error("Failed to initialize GLFW");
		}

		m_window = glfwCreateWindow(width, height, "Ion editor - Xenon engine", nullptr, nullptr);
		if(!m_window) {
			glfwTerminate();
			throw std::runtime_error("Unable to create window");
		}
	}

	void Application::run() {
		while(!glfwWindowShouldClose(m_window)) {
			glfwPollEvents();
		}
		glfwTerminate();
	}
}

