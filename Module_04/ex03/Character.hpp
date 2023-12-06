#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

#define NC 		 "\033[0m"
#define CYAN   	 "\033[36;1m"
#define GREEN    "\033[32;1m"
#define RED      "\033[31;1m"

class ICharacter;
class AMateria;

class Character : public ICharacter
{
    private :
        std::string _name;
        AMateria*    tab[4];
    public :
        Character(void);
        Character(const Character &cpy);
        Character(std::string const& name);
        ~Character(void);
        Character&   operator=(const Character& bis);

        virtual 	std::string const& getName(void) const;
		virtual     void equip(AMateria* m);
        virtual     void unequip(int idx);
        virtual     void use(int idx, ICharacter& target);
        int         countItems();
};

#endif