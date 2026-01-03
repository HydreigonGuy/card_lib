
#include "Card.hpp"

Card::Card(int value)
{
    this->_value = value;
}

Card::Card(int value, std::string name)
{
    this->_value = value;
    this->_name = name;
}

Card::~Card()
{
}

int getValue()
{
    return (this->_value);
}

std::string getName()
{
    return (this->_name);
}
