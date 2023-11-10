#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string _name, const Weapon &_weapon);
        ~HumanA();
        void        attack();

    private:
        std::string         name;
        const Weapon&       weapon;
};

#endif