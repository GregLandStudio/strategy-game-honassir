
#include <includes/window.h>
#include <includes/menu.h>

int main() {
	using namespace Honassir;
	Window(500, 500,"Honasšir");
	Menu main({MenuItem("Play",0x00ff00),
				MenuItem("Settings",0x0000ff),
				MenuItem("Exit",0xff0000),});
	return 0;
}
