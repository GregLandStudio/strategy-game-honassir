#include <string>
#include <SFML/Graphics.hpp>

namespace Honassir {
	class Window {
		int w,h;
		std::string name;
		sf::RenderWindow window;
		public:
			Window(int w, int h, std::string name);
			void create();
	};
}
