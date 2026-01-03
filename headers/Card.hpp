
#ifndef CARD_HPP_
#define CARD_HPP_

#include <string>

class Card {
    public:
        Card(int value);
        Card(int value, std::string name);
        ~Card();
        int getValue();
        std::string getName();

    protected:
    private:
        int _value;
        std::string _name;
};

#endif