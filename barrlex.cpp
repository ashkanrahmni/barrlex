#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(1200, 600), "Barrlex Worm Die or alive");

    std::string symbols = "%#@";
    int symbolSize = 30;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Red);


        for (int i = 0; i < window.getSize().x / symbolSize; ++i) {
            sf::RectangleShape symbol(sf::Vector2f(symbolSize, symbolSize));
            symbol.setFillColor(sf::Color::White);
            symbol.setPosition(i * symbolSize, 0); /

            window.draw(symbol);
        }

        for (int i = 0; i < window.getSize().x / symbolSize; ++i) {
            sf::RectangleShape symbol(sf::Vector2f(symbolSize, symbolSize));
            symbol.setFillColor(sf::Color::White);
            symbol.setPosition(i * symbolSize, window.getSize().y - symbolSize);

            window.draw(symbol);
        }

        for (int i = 0; i < window.getSize().y / symbolSize; ++i) {
            sf::RectangleShape symbol(sf::Vector2f(symbolSize, symbolSize));
            symbol.setFillColor(sf::Color::White);
            symbol.setPosition(0, i * symbolSize); 

            window.draw(symbol);
        }

        for (int i = 0; i < window.getSize().y / symbolSize; ++i) {
            sf::RectangleShape symbol(sf::Vector2f(symbolSize, symbolSize));
            symbol.setFillColor(sf::Color::White);
            symbol.setPosition(window.getSize().x - symbolSize, i * symbolSize); 

            window.draw(symbol);
        }

        window.display();
    }

    return 0;
}
