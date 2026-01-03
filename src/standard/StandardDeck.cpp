
#include "StandardDeck.hpp"

StandardDeck::StandardDeck() : Deck()
{
    int value = 1;

    for (std::string color : {"Spades", "Clubs", "Hearts", "Diamonds"}) {
        for (std::string number : {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"}) {
            this->addCard(std::make_shared<Card>(value, number + " of " + color));
            value++;
        }
        value = 1;
    }
}

StandardDeck::~StandardDeck()
{
}
