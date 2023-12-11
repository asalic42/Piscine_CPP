# include "Cat.hpp"

//Cat inherits from Animal
Cat::Cat(void) : Animal()
{
    this->_type = "Cat";
    this->brainC = new Brain();
    std::cout << B_GREEN "Cat default constructor called" NC << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    this->_type = copy._type;
    this->brainC = new Brain(*copy.brainC);
    if (!this->brainC)
    {
        std::cout << "Error : Malloc failed" << std::endl;
        return ;
    }
    *this = copy;
    std::cout << B_GREEN "Cat copy constructor called" NC << std::endl;
}

Cat::~Cat(void)
{
    std::cout << B_GREEN "Cat destructor called" NC << std::endl;
    if (brainC)
        delete brainC;
}

std::string Cat::getType(void) const
{
    return (this->_type);
}

Brain*  Cat::getBrain(void) const
{
    return this->brainC;
} 

void          Cat::makeSound(void) const
{
    std::cout << "Miaou" << std::endl;
}

Cat&    Cat::operator=(const Cat &bis)
{
    if (this != &bis)
    {
        if (this->brainC)
            delete this->brainC;
        this->brainC = new Brain(*bis.brainC);
        this->_type = bis._type;
    }
    return (*this);
}
