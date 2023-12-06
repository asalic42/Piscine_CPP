# include "AMateria.hpp"
# include "ICharacter.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(std::string const& type) : _type(type) {}

AMateria::AMateria(const AMateria &cpy) : _type(cpy.getType()) {}

AMateria&   AMateria::operator=(const AMateria& bis) {_type = bis.getType(); return *this;}

const std::string& AMateria::getType(void) const
{
    return (_type);
}

AMateria::~AMateria(){}

void    AMateria::use(ICharacter& target) { 
    if (_type == "ice")
        std::cout << CYAN " shoots an ice bolt at " << target.getName() << " *" NC << std::endl;
    else if (_type == "cure")
        std::cout << CYAN " heals " << target.getName() << "’s wounds *" NC << std::endl;
    else
        std::cout << "WOOW, " << _type << " is used against " << target.getName() << std::endl;
}

