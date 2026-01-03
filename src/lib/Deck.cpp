
#include "Deck.hpp"

Deck::Deck()
{
}

Deck::~Deck()
{
}

void Deck::shuffle()
{
    /*unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine e(seed);

    std::shuffle(std::begin(this->_cards), std::end(this->_cards), e);*/
}

std::shared_ptr<Card> Deck::draw()
{
    if (this->_cards.size() > 0) {
        std::shared_ptr<Card> card = this->_cards.back();
        this->_cards.pop_back();
        return (card);
    }
    return (std::make_shared<Card>(false));
}

void Deck::addCard(std::shared_ptr<Card> card)
{
    this->_cards.push_back(card);
}
