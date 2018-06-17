
#include <utility>
#include <iostream>
#include <includes/window.h>
Honassir::Window::Window(int w, int h, std::string name):
	w(w), h(h), name(name),window(sf::VideoMode(w, h), name, sf::Style::Close | sf::Style::Resize){
		create();
}
void Honassir::Window::create(){
	while(window.isOpen())
	{
		sf::Event evnt;
		while(window.pollEvent(evnt))
		{
			switch(evnt.type)
			{
				case sf::Event::Closed:
					window.close();
					break;
				default:
					break;
			}
		}
	}
}
