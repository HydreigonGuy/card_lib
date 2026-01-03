
#include "SkyjoDeck.hpp"

#include <iostream>

int main(int ac, char **av)
{
    SkyjoDeck deck;
    std::shared_ptr<Card> card = deck.draw();

    while (card.get()->check()) {
        std::cout << card.get()->getValue() << std::endl;
        card = deck.draw();
    }
}
