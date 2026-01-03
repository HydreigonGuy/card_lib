
#ifndef DECK_HPP_
#define DECK_HPP_

#include <vector>
#include <memory>

#include "Card.hpp"

class Deck {
    public:
        Deck();
        ~Deck();
        void shuffle();
        std::shared_ptr<Card> draw();

    protected:
        void addCard(std::shared_ptr<Card> card);

    private:
        std::vector<std::shared_ptr<Card>> _cards;
};

#endif