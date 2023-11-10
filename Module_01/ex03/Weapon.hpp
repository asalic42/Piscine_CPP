#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <cstring>

class Weapon
{
    public:
        Weapon(std::string _type);
        ~Weapon(void);

        const std::string&      getType(void) const ;
        void                    setType(const std::string& value);
    
    private:
        std::string type;
};

# include "HumanA.hpp"
# include "HumanB.hpp"

#endif