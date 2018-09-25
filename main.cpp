#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>


int main()
{
	//utworzenie okna graficznego o rozdzialce full hd 32 bit kolory na fullscreenie
	sf::RenderWindow Window(sf::VideoMode(1920, 1080, 32), "super awesome game", sf::Style::Fullscreen);
	sf::CircleShape oshape(20);
	oshape.setFillColor(sf::Color(100, 250, 50));
	Window.setFramerateLimit(60);

	while (Window.isOpen())
	{
		sf::Event WindowEvent;
		while (Window.pollEvent(WindowEvent))
		{
			
			
			//Pêtla poni¿ej umo¿liwia zamkniêcie okna przyciskiem x
			if (WindowEvent.type == sf::Event::Closed)
				Window.close();
			//pêtla umo¿liwia wyjœcie przyskiem escape
			if (WindowEvent.type == sf::Event::KeyPressed && WindowEvent.key.code == sf::Keyboard::Escape)
				Window.close();
			
		}
		//Basic controls
			if (WindowEvent.type == sf::Event::KeyPressed && WindowEvent.key.code == sf::Keyboard::Up)
				oshape.move(0, -10);
			if (WindowEvent.type == sf::Event::KeyPressed && WindowEvent.key.code == sf::Keyboard::Down)
				oshape.move(0, 10);
			if (WindowEvent.type == sf::Event::KeyPressed && WindowEvent.key.code == sf::Keyboard::Left)
				oshape.move(-10, 0);
			if (WindowEvent.type == sf::Event::KeyPressed && WindowEvent.key.code == sf::Keyboard::Right)
				oshape.move(10, 0);		
		//odswieza I wyswietla okno
		Window.clear();
		Window.draw(oshape);
		Window.display();
	}
	return 0;
}