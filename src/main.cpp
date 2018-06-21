
#include <includes/window.h>
#include <includes/graphics.h>
#include <includes/menu.h>
#include <memory>

int main() {
	using namespace Honassir;
	Graphics::init();
	Graphics::Window win(800, 600,"Honasšir");
	std::shared_ptr<Menu> main(new Menu({MenuItem("Play",0x00ff00),
						MenuItem("Settings",0x0000ff),
						MenuItem("Exit",0xff0000),}));
	win.init();
	while(!win.isClosed()){
		win.update();
	}
	win.destroy();
	Graphics::terminate();
	return 0;
}
