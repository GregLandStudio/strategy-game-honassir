
#include <utility>
#include <iostream>
#include <includes/window.h>
#include <memory>
Honassir::Graphics::Window::Window(int w, int h, std::string name):
	w(w), h(h), name(name), window(sf::VideoMode(w, h), name, sf::Style::Close | sf::Style::Resize){

}
void Honassir::Graphics::Window::start(){
	while(window.isOpen()) {
		sf::Event evnt;
		while(window.pollEvent(evnt)) {
			switch(evnt.type) {
				case sf::Event::Closed:
					window.close();
					break;
				default:
					break;
			}
		}
		window.clear(sf::Color::White);
		for(std::shared_ptr<Drawable> d:toDraw){
			d->draw(*this);
		}
		window.display();
	}
}
