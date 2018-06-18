
#include <includes/window.h>
#include <includes/menu.h>
#include <memory>

int main() {
	using namespace Honassir;
	Graphics::Window win(800, 600,"Honasšir");
	std::shared_ptr<Menu> main(new Menu({MenuItem("Play",sf::Color::Green),
						MenuItem("Settings",sf::Color::Blue),
						MenuItem("Exit",sf::Color::Red),}));
	win.toDraw.push_back(main);
	win.start();
	return 0;
}
