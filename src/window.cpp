
#include <utility>
#include <iostream>
#include <includes/window.h>
Honassir::Graphics::Window::Window(int w, int h, std::string name):
	w(w), h(h), name(name), _window(sf::VideoMode(w, h), name, sf::Style::Close | sf::Style::Resize){
		while(_window.isOpen()) {
			sf::Event evnt;
			while(_window.pollEvent(evnt)) {
				switch(evnt.type) {
					case sf::Event::Closed:
						_window.close();
						break;
					default:
						break;
				}
			}
			_window.clear(sf::Color::White);
			_window.display();
		}
}
