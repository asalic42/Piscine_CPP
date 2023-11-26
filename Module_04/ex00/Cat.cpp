# include "Cat.hpp"

Cat::Cat(void) : Animals()
{
    this->_type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}

void    Cat::makeSound(void)
{
    std::cout << "Miaou" << std::endl;
}

Cat&    Cat::operator=(const Cat &bis)
{
    if (this != &bis)
        Animals::operator=(bis);
    return (*this);
}