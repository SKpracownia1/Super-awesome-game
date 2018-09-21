#include <iostream>
#include <SFML/Window.cpp> // po prostu umozliwia zrobienie okna
#include <SFML/Graphics.cpp> // umożliwia render okna I wszelkie zmiany graficzne

using namespace std;

Int main() //pewnie zmienilibysmy to na object typu np. Int oknoApki czy coś
{
                //utworzenie okna graficznego o rozdzialce full hd 32 bit kolory na fullscreenie
                Sf::RenderWindow window(sf::VideoMode (1920,1080,32), “super awesome game”, sf::Style::Fullscreen);
                While(window.isOpen())
                {
                               Sf::Event WindowEvent;
                               While(window.pollEvent(windowEvent))
                               {
                               //Pętla poniżej umożliwia zamknięcie okna przyciskiem x
                                If(WindowEvent.type == sf::Event::Closed)
                                Window.close();

                               //pętla umożliwia wyjście przyskiem escape
                               If(WindowEvent.type=sf::event::keypressed  && windowEvent.key.code == sf::Keyboard::Escape)
                               Window.close();
                               }
                //odswieza I wyswietla okno
                Window.clear();
                Window.display();
                }
  
return 0;
}

