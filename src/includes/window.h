#include <string>
#include <SFML/Graphics.hpp>

namespace Honassir {
	namespace Graphics {
		class Window {
			int w,h;
			std::string name;
		public:
			sf::RenderWindow window;
			Window(int w, int h, std::string name);
		};
	}
}
