# include "Animals.hpp"

Animals::Animals(void)
{
    this->_type = "Animal";
    std::cout << "Animals default constructor called" << std::endl;
}

Animals::Animals(const Animals &copy)
{
    *this = copy;
    std::cout << "Animals copy constructor called" << std::endl;
}

Animals::~Animals(void)
{
    std::cout << "Animals destructor called" << std::endl;
}

void    Animals::makeSound(void)
{
    std::cout << "Doesn't make any sound" << std::endl;
}

Animals&    Animals::operator=(const Animals &bis)
{
    if (this != &bis)
        Animals::operator=(bis);
    return (*this);
}