# include "AMateria.hpp"
# include "MateriaSource.hpp"
# include "IMateriaSource.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include "Character.hpp"
int main()
{
    IMateriaSource* src = new MateriaSource();
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();
    src->learnMateria(ice);
    src->learnMateria(cure);
    ICharacter* poloboy = new Character("poloboy");
    AMateria* tmp;
    tmp = src->createMateria("yolo");
    if (tmp)
        poloboy->equip(tmp);
    tmp = src->createMateria("cure");
    poloboy->equip(tmp);
    ICharacter* bob = new Character("bob");
    poloboy->use(0, *bob);
    poloboy->use(-2147364748, *bob);
    delete bob;
    delete poloboy;
    delete src;
    return 0;
}