# include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

AMateria*    Ice::clone(void) const
{
    AMateria* ice = new Ice();
    return ice;
}

Ice::~Ice(void){}

Ice::Ice(const Ice &cpy) : AMateria("ice") {this->_type = cpy.getType();}

Ice&   Ice::operator=(const Ice& bis) {this->_type = bis.getType(); return (*this);}
