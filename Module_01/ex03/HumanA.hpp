#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, const Weapon &weapon);
        ~HumanA();
        void        attack();

    private:
        std::string         _name;
        const Weapon&       _weapon;
};

#endif