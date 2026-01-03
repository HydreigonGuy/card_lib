
#ifndef CARD_HPP_
#define CARD_HPP_

#include <string>

class Card {
    public:
        Card(int value);
        Card(int value, std::string name);
        Card(bool is_card);
        ~Card();
        int getValue();
        std::string getName();
        bool check();

    protected:
    private:
        int _value;
        std::string _name;
        bool _is_card;
};

#endif