
#include "Card.hpp"

Card::Card(int value)
{
    this->_value = value;
    this->_is_card = true;
}

Card::Card(int value, std::string name)
{
    this->_value = value;
    this->_name = name;
    this->_is_card = true;
}

Card::Card(bool is_card)
{
    this->_is_card = is_card;
}

Card::~Card()
{
}

int Card::getValue()
{
    return (this->_value);
}

std::string Card::getName()
{
    return (this->_name);
}

bool Card::check()
{
    return (this->_is_card);
}
