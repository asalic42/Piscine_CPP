#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure &cpy) : AMateria("cure") {this->_type = cpy.getType();}

Cure&   Cure::operator=(const Cure& bis) {this->_type = bis.getType(); return (*this);}

AMateria*    Cure::clone(void) const{
    AMateria* cure = new Cure();
    return cure;
}

Cure::~Cure(void) {}