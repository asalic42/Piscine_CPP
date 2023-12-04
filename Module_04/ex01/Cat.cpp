# include "Cat.hpp"

//Cat inherits from Animal
Cat::Cat(void) : Animal()
{
    this->_type = "Cat";
    this->brainC = new Brain();
    std::cout << B_GREEN "Cat default constructor called" NC << std::endl;
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
    std::cout << B_GREEN "Cat copy constructor called" NC << std::endl;
}

Cat::~Cat(void)
{
    delete this->brainC;
    std::cout << B_GREEN "Cat destructor called" NC << std::endl;
}

std::string Cat::getType(void) const
{
    return (this->_type);
}

const Brain*  Cat::getBrain(void) const
{
    return this->brainC;
} 

void    Cat::makeSound(void) const
{
    std::cout << "Miaou" << std::endl;
}

Cat&    Cat::operator=(const Cat &bis)
{
    this->brainC = bis.brainC;
    if (this != &bis)
        Animal::operator=(bis);
    return (*this);
}

///////////////////////////////////////////////
//Wrong Cat inherits from WrongAnimal
WrongCat::WrongCat(void) : WrongAnimal()
{
    this->_type = "WrongCat";
    std::cout << B_GREEN "WrongCat default constructor called" NC << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    *this = copy;
    std::cout << B_GREEN "WrongCat copy constructor called" NC << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << B_GREEN "WrongCat destructor called" NC << std::endl;
}

std::string WrongCat::getType(void) const
{
    return (this->_type);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Miaou" << std::endl;
}

WrongCat&    WrongCat::operator=(const WrongCat &bis)
{
    if (this != &bis)
        WrongAnimal::operator=(bis);
    return (*this);
}
