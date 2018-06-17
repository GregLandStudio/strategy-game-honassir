#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <includes/window.h>
Honassir::Window::Window(int w, int h) {
	sf::RenderWindow window(sf::VideoMode(w, h), "Honasšir", sf::Style::Close | sf::Style::Resize);
	while(window.isOpen())
	{
		sf::Event evnt;
		while(window.pollEvent(evnt))
		{
			switch(evnt.type)
			{
				case sf::Event::Closed:
					window.close();
			}
		}
	}
}
