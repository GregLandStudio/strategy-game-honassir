#pragma once
#include <string>
#include <memory>
#include <GLFW/glfw3.h>

namespace Honassir {
	namespace Graphics {
		class Window {
			int w,h;
			std::string name;
			GLFWwindow* id;
		public:
			Window(int w, int h, std::string name);
			void init();
			void destroy();
			void update();
			bool isClosed();
			GLFWwindow* getId();
		};
	}
}
