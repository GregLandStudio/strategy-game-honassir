#include <includes/menu.h>
#include <iostream>

sf::Font createFont(){
	sf::Font font;
	if (!font.loadFromFile("arial.ttf"))
	{
		//TODO: error support
	}
	return font;
}

sf::Text createText(sf::Font font,std::string str,int size,sf::Color col){
	sf::Text text;
	text.setFont(font);
	text.setString(str);
	text.setCharacterSize(size);
	text.setColor(col);
	return text;
}

void Honassir::Menu::draw(Honassir::Graphics::Window &w){
	static sf::Font font=createFont();
	static sf::Text text=createText(font,"hello",10,sf::Color::Black);
	w.window.draw(text);
}
