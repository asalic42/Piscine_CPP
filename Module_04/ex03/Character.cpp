# include "Character.hpp"

//Canonical Form
Character::Character(void) : _name("no_name")
{ 
    for (int i = 0; i < 4; i++)
        tab[i] = NULL;
}

Character::Character(std::string const& name) : _name(name)
{ 
    for (int i = 0; i < 4; i++)
        tab[i] = NULL;
}

Character::Character(const Character &cpy)
{
    Character::operator=(cpy);
}

Character&   Character::operator=(const Character& bis)
{
    if (this != &bis)
    {
        for (int i = 0; i < 4; i++)
        {
            if (tab[i])
                delete tab[i];
            tab[i] = bis.tab[i];
        }
        _name = bis._name;
    }
    return (*this);
}

Character::~Character() {}

////////////////////////////////////////
//Methods

std::string const&  Character::getName(void) const
{
    return (_name);
}

int Character::countItems(void)
{
    int i = 0;
    while (i < 4 && tab[i] != NULL)
        i++;
    return i;
}

void Character::equip(AMateria* m)
{
	if (this->countItems() == 4)
		std::cout << RED << "Inventory is full." NC << std::endl;
	else {
        int counter = this->countItems();
		tab[counter] = m;
        std::cout << GREEN << m->getType() << " is now equiped in slot " << counter << " of " << _name << "'s inventory " << NC << std::endl;
    }
}

void Character::unequip(int idx)
{
    if (this->countItems() == 0)
        std::cout << RED "Nothing in inventory." NC << std::endl;
    else
        tab[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 4 || idx < 0) {std::cout << RED << idx << " Isn't a valid index." << NC << std::endl; return;}
    if (tab[idx] == NULL) {
        std::cout << RED "No items there !" NC << std::endl;
        return ;
    }
    std::cout << CYAN << _name << NC;
    tab[idx]->use(target);
}
