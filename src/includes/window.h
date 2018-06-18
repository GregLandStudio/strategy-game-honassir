#include <string>
#include <SFML/Graphics.hpp>

namespace Honassir {
	namespace Graphics {
		class Window {
			int w,h;
			std::string name;
			sf::RenderWindow _window;
		public:
			Window(int w, int h, std::string name);
			inline sf::RenderWindow& window(){
				return _window;
			}
		};
	}
}
