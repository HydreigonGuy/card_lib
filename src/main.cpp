
#include "SkyjoDeck.hpp"
#include "StandardDeck.hpp"

#include <iostream>

int main(int ac, char **av)
{
    /*SkyjoDeck deck;
    deck.shuffle();
    std::shared_ptr<Card> card = deck.draw();

    while (card.get()->check()) {
        std::cout << card.get()->getValue() << std::endl;
        card = deck.draw();
    }*/

    StandardDeck deck;
    std::shared_ptr<Card> card = deck.draw();

    while (card.get()->check()) {
        std::cout << card.get()->getName() << std::endl;
        card = deck.draw();
    }
}
