
#include "SkyjoDeck.hpp"

SkyjoDeck::SkyjoDeck() : Deck()
{
    for (int j = 0; j < 5; j++)
        this->addCard(std::make_shared<Card>(-2));
    for (int j = 0; j < 10; j++)
        this->addCard(std::make_shared<Card>(-1));
    for (int j = 0; j < 15; j++)
        this->addCard(std::make_shared<Card>(0));
    for (int i = 1; i < 13; i++)
        for (int j = 0; j < 10; j++)
            this->addCard(std::make_shared<Card>(i));
}

SkyjoDeck::~SkyjoDeck()
{
}
