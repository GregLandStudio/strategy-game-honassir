#include <includes/menu.h>
#include <iostream>


void Honassir::Menu::draw(Honassir::Graphics::Window &w){
	sf::Font font;
	if (!font.loadFromFile("arial.ttf"))
	{
		//TODO: error support
	}
	sf::Text text;
	text.setFont(font);
	text.setString("hello");
	text.setCharacterSize(30);
	text.setColor(sf::Color::Black);
	text.setStyle(sf::Text::Bold);
	w.window.draw(text);
}
