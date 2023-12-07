# include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice &cpy) : AMateria("ice")
{
    this->_type = cpy.getType();
}

Ice&   Ice::operator=(const Ice& bis)
{
    if (this != &bis)
        this->_type = bis.getType();
    return (*this);
}

Ice::~Ice(void){}

AMateria*    Ice::clone(void) const
{
    AMateria* ice = new Ice();
    return ice;
}