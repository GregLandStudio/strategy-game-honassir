#pragma once
#include <string>
#include <memory>

namespace Honassir {
	namespace Graphics {
		class Window {
			int w,h;
			std::string name;
			int id;
		public:
			Window(int w, int h, std::string name);
			void init();
		};
	}
}
