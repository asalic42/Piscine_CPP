# include "Animal.hpp"

Animal::Animal(void)
{
    this->_type = "Animal";
    std::cout << B_CYAN "Animal default constructor called" NC << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << B_CYAN "Animal copy constructor called" NC << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void    Animal::makeSound(void) const
{
    std::cout << "Doesn't make any sound" << std::endl;
}

Animal&    Animal::operator=(const Animal &bis)
{
    if (this != &bis)
        Animal::operator=(bis);
    return (*this);
}

const Brain*    Animal::getBrain(void) const
{
    return (0);
}

Animal::~Animal(void)
{
    std::cout << B_CYAN "Animal destructor called" NC << std::endl;
}


/////////////////////////////////////
//WrongAnimal test class  
WrongAnimal::WrongAnimal(void)
{
    this->_type = "WrongAnimal";
    std::cout << B_CYAN "WrongAnimal default constructor called" NC << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
    std::cout << B_CYAN "WrongAnimal copy constructor called" NC << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "Doesn't make any sound" << std::endl;
}

WrongAnimal&    WrongAnimal::operator=(const WrongAnimal &bis)
{
    if (this != &bis)
        WrongAnimal::operator=(bis);
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << B_CYAN "WrongAnimal destructor called" NC << std::endl;
}