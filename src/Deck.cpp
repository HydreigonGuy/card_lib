
#include "Deck.hpp"

Deck::Deck()
{
}

Deck::~Deck()
{
}

void Deck::shuffle()
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine e(seed);

    std::shuffle(std::begin(this->_cards), std::end(this->_cards), e);
}

std::shared_ptr<Card> Deck::draw()
{
    if (this->_cards.size() > 0)
        return (this->_cards.pop_back());
    // add something to return if the deck is empty
    // return ()
}
