#pragma once
#include <vector>
#include <includes/drawable.h>
namespace Honassir {
  class MenuItem {
		public:
			std::string name;
			sf::Color clr;
			MenuItem(std::string name, sf::Color clr):
				name(name), clr(clr) {

			}
	};
	class Menu : public Graphics::Drawable {
		public:
			std::vector<MenuItem> item;
			Menu(std::vector<MenuItem> item):
				item(item) {

			}
			void draw(Graphics::Window&);
	};
}
