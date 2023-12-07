# include "AMateria.hpp"
# include "MateriaSource.hpp"
# include "IMateriaSource.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();

    ICharacter* poloboy = new Character("poloboy");
    ICharacter* bob = new Character("bob");

    AMateria *ice = new Ice();
    AMateria *cure = new Cure();
    AMateria* tmp;
    AMateria* ice2 = ice->clone();


    src->learnMateria(ice);
    src->learnMateria(cure);

    tmp = src->createMateria("yolo");
    if (tmp)
        poloboy->equip(tmp);

    tmp = src->createMateria("ice");
    bob->equip(tmp);
    bob->equip(ice2);

    tmp = src->createMateria("cure");
    poloboy->equip(tmp);
    poloboy->equip(tmp);
    poloboy->equip(tmp);
    poloboy->equip(tmp);
    poloboy->equip(tmp);
    poloboy->unequip(2);
    poloboy->equip(tmp);

    poloboy->use(0, *bob);
    poloboy->use(-2147364748, *bob);
    bob->use(0, *poloboy);

    delete ice2;
    delete bob;
    delete poloboy;
    delete src;
    return 0;
}