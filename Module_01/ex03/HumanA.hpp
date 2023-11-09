#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    public:
        void        attack();
        HumanA(std::string _name, const Weapon _weapon);
        ~HumanA() {};
    private:
        std::string name;
        Weapon      weapon;
};

#endif