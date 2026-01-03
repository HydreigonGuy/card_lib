
#include "SkyjoDeck.hpp"

SkyjoDeck::SkyjoDeck() : Deck()
{
    for (int i = -2; i < 13; i++)
        for (int j = 0; j < 10; j++)
            this->addCard(std::make_shared<Card>(i));
}

SkyjoDeck::~SkyjoDeck()
{
}
