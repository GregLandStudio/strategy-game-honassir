#pragma once
#include <vector>
#include <string>
#include <includes/window.h>
namespace Honassir {
  class MenuItem {
		public:
			std::string name;
			int clr;
			MenuItem(std::string name, int clr):
				name(name), clr(clr) {

			}
	};
	class Menu{
		public:
			std::vector<MenuItem> item;
			Menu(std::vector<MenuItem> item):
				item(item) {

			}
			void draw(Graphics::Window&);
	};
}
