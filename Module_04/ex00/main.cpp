# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

/* int main(void)
{
    Animal *none = new Animal();
    Cat     *cat = new Cat();
    Dog     *dog = new Dog();
    Animal *catbis = new Cat();

    std::cout << "--> Animal made : " << std::endl;
    none->makeSound();
    std::cout << "--> Cat made : " << std::endl;
    cat->makeSound();
    std::cout << "--> Dog made : " << std::endl;
    dog->makeSound();
    std::cout << "--> Animal Cat made : " << std::endl;
    catbis->makeSound();

    delete catbis;
    delete dog;
    delete cat;
    delete none;
} */

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const WrongAnimal* animal = new WrongAnimal();
    const WrongAnimal* nocat = new WrongCat();
    const WrongCat*     catcat = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "\n--> Wrong things now:\n" << std::endl;
    animal->makeSound();
    nocat->makeSound();
    catcat->makeSound();

    delete catcat;
    delete nocat;
    delete animal;
    delete i;
    delete j;
    delete meta;
    return 0;
}