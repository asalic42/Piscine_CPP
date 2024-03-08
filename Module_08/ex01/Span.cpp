#include "Span.hpp"

Span::Span(void) : N(0) {}

Span::Span(unsigned int _N) : N(_N) {}

Span::Span(const Span& copy) : N(copy.N), tabInt(copy.tabInt) {}

Span&   Span::operator=(const Span& bis)
{
    if (this != &bis)
    {
        this->N = bis.N;
        this->tabInt = bis.tabInt;
    }
    return (*this);
}

Span::~Span(void) {}

void    Span::printTabInt(void)
{
    if (tabInt.size() <= 0)
        throw NotEnoughNumbersException();
    for (unsigned int i=0; i < tabInt.size(); i++)
        std::cout << tabInt[i] << " ";
    std::cout << std::endl;
}

void    Span::addNumber(int number)
{
    if (tabInt.size() >= N)
        throw FullClassException();
    tabInt.push_back(number);
}

int    Span::shortestSpan(void)
{
    unsigned int j = 0;
    int short_nb=0;
    if (tabInt.size() < 2)
        throw NotEnoughNumbersException();
    std::vector<int> tmp = tabInt;
    std::sort(tmp.begin(), tmp.end());
    for (unsigned int i=0; i < tabInt.size(); i++)
    {
        j = i +1;
        while (j < tabInt.size())
        {
            if (tmp[j] - tmp[i] < short_nb || short_nb == 0)
                short_nb = tmp[j] - tmp[i];
            j ++;
        }
    }
    return (short_nb);
}

int Span::longestSpan(void)
{
    if (tabInt.size() < 2)
        throw NotEnoughNumbersException();
    std::vector<int> tmp = tabInt;
    std::sort(tmp.begin(), tmp.end());
    return ((tmp[tmp.size() -1]) - tmp[0]);
}

void    Span::addSequenceNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if ((tabInt.size() + std::distance(begin, end)) > N)
        throw FullClassException();
    tabInt.insert(tabInt.end(), begin, end);
}
