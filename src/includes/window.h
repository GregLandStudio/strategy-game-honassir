#pragma once
#include <string>
#include <SFML/Graphics.hpp>
#include <includes/drawable.h>
#include <memory>

namespace Honassir {
	namespace Graphics {
		class Window {
			int w,h;
			std::string name;
		public:
			sf::RenderWindow window;
			std::vector<std::shared_ptr<Drawable>> toDraw={};
			Window(int w, int h, std::string name);
			void start();
		};
	}
}
