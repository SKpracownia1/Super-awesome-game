# Super-awesome-game
It's gonna be sweet



Sf::setFramerateLimit (60); - pod pozycją sf::renderwindow – raczej nie muszę Ci pisać co robi render xd



W int ()main przed pierwszą pętlą:

sf::CircleShape shape(50); //określa nam, że powstanie klasa – koło o nazwie shape i wielkości 50
shape.setFillColor(sf::Color(100, 250, 50)); //koło jest wypełnione zielonym

potem zachodzi nam petla while(window.isopen);
potem mamy petla while(poll.event)

a później w git trzeba dodać
window.clear();//jest już
window.draw(shape); //wyświetla zarejestrowaną klasę
window.display();//już jest

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <SFML/Window.cpp> // po prostu umozliwia zrobienie okna
#include <SFML/Graphics.cpp> // umożliwia render okna I wszelkie zmiany graficzne

Int main() //pewnie zmienilibysmy to na object typu np. Int oknoApki czy coś
{
                //utworzenie okna graficznego o rozdzialce full hd 32 bit kolory na fullscreenie
                Sf::RenderWindow window(sf::VideoMode (1920,1080,32), “super awesome game”, sf::Style::Fullscreen);
   sf::CircleShape shape(50); //określa nam, że powstanie klasa – koło o nazwie shape i wielkości 50
   shape.setFillColor(sf::Color(100, 250, 50)); //koło jest wypełnione zielonym

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
                Window.clear();//odswieza I wyswietla okno
   window.draw(shape); //wyświetla zarejestrowaną klasę
   Window.display();
                }
}

