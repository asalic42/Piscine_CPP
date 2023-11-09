#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <cstring>
# include "HumanA.hpp"
# include "HumanB.hpp"

class Weapon
{
    public:
        Weapon(std::string _type);
        ~Weapon(void) {};

        std::string&    getType();
        void            setType(std::string type);
    
    private:
        std::string type;
};

#endif