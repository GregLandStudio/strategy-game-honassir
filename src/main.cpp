
#include <includes/window.h>
#include <includes/menu.h>

int main() {
	using namespace Honassir;
	Graphics::Window(800, 600,"Honasšir");
	Menu main({MenuItem("Play",sf::Color::Green),
						MenuItem("Settings",sf::Color::Blue),
						MenuItem("Exit",sf::Color::Red),});
	return 0;
}
