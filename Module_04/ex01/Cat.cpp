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
    if (this->brainC)
        delete this->brainC;
    std::cout << B_GREEN "Cat destructor called" NC << std::endl;
}

std::string Cat::getType(void) const
{
    return (this->_type);
}

Brain*  Cat::getBrain(void) const
{
    return this->brainC;
} 

void    Cat::makeSound(void) const
{
    std::cout << "Miaou" << std::endl;
}

Cat&    Cat::operator=(const Cat &bis)
{
    Brain* newBrain = new Brain(*bis.brainC);
    this->brainC = newBrain;
    _type = bis._type;
    return (*this);
}
