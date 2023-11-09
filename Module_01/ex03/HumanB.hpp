#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string _name);
        ~HumanB() {};
        void        attack();
        void        setWeapon(std::string type);
        
    private:
        std::string name;
        Weapon      weapon;
};

#endif