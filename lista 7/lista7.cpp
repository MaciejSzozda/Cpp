#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
int main()
{
 int keyonoff=1;
 int p = 150; //promień kółka
 int s = 800; //szerokość okna
 int w = 600; //wysokosc okna
 float x = s/2-p;
 float y = w/2-p;
 float vx=0.05;
 float vy=0.05;
sf::RenderWindow window(sf::VideoMode(s, w), "Nasze okno");
sf::CircleShape shape(p);
shape.setFillColor(sf::Color::Red);
shape.setPosition(x,y);
while (window.isOpen()) 
{
    sf::Event event;

    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        window.close();

        if(event.type== sf::Event::KeyPressed)
        keyonoff=1-keyonoff;
 
        if (event.type == sf::Event::KeyPressed)
        {
            if (event.key.code == sf::Keyboard::Escape)
            {
                window.close();
            }
        }
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        shape.setFillColor(sf::Color(rand() % 255, rand() % 255,
        rand() % 255));
    }
    if(x>=s/2+p*2/3)
        {
            vx=-vx;
        }
        if(x<=0)
        {
            vx=-vx;
        }
        if(y<=0)
        {
            vy=-vy;
        }
        if(y>=w/2)
        {
            vy=-vy;
        }
        x=x+vx;
        y=y+vy;
        vy=vy+0.00003;

        shape.setPosition(x,y);
    window.clear(sf::Color::Black);
    if(keyonoff)
    window.draw(shape);

window.display();
}
return 0;
}