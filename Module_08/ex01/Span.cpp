#include "Span.hpp"

Span::Span(void) : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span& copy) : _N(copy._N) _tabInt(copy._tabInt) {}

Span&   Span::operator=(const Span& bis)
{
    if (this != &bis)
    {
        this->_N = bis._N;
        this->_tabInt = bis._tabInt;
    }
    return (*this);
}

Span::~Span(void) {}

void    Span::addNumber(int number)
{
    int i=0;
    while (i < this->_N)
    {
        if (this->_tabInt[i])
            i ++;
        else {
            this->_tabInt[i] = number;
            return ;}
    }
    throw FullClassException();
}

int    Span::shortestSpan(void)
{
    int j = 0;
    int short = 0;
    if (!this->_tabInt[0] || !this->_tabInt[1])
        throw NotEnoughNumbersException();
    for (int i=0; this->_tabInt[i]; i++)
    {
        j = i +1;
        while (this->_tabInt[j])
        {
            if (this->_tabInt[i] - this->_tabInt[j] < short || short == 0)
                short = this->_tabInt[i] - this->_tabInt[j];
            j ++;
        }
    }
    if (short < 0) short *= -1;
    return (short);
}