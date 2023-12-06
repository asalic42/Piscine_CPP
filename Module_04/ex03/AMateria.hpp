#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "Character.hpp"
# include "ICharacter.hpp"

#define NC 		 "\033[0m"
#define CYAN   	 "\033[36;1m"
#define GREEN    "\033[32;1m"
#define RED      "\033[31;1m"

class ICharacter;

class AMateria
{
    protected :
        std::string _type;

    public :
        AMateria(void);
        AMateria(std::string const& type);
        AMateria(const AMateria& copy);
        AMateria&   operator=(const AMateria& bis);
        virtual ~AMateria(void);

        const std::string& getType(void) const;

        virtual AMateria*   clone(void) const = 0; 
        virtual void        use(ICharacter& target);
};

#endif