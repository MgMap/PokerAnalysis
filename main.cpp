#include <iostream>
#include <SFML/Graphics.hpp>
#include "draw_cardHand.h"

int main() {
    srand(time(NULL));

    sf::RenderWindow window({1280, 720, 32},"Poker Analysis");
    window.setFramerateLimit(60);
    draw_cardHand cards;
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(sf::Event::Closed == event.type)
                window.close();
        }
        window.clear(sf::Color::Green);
        window.draw(cards);
        window.display();
    }
    return 0;

}




