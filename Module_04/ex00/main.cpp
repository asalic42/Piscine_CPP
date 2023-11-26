# include "Animals.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

int main(void)
{
    Animals *none = new Animals();
    Cat     *cat = new Cat();
    Dog     *dog = new Dog();
    Animals *catbis = new Cat();

    std::cout << "--> Animal made : " << std::endl;
    none->makeSound();
    std::cout << "--> Cat made : " << std::endl;
    cat->makeSound();
    std::cout << "--> Dog made : " << std::endl;
    dog->makeSound();
    std::cout << "--> Animal Cat made : " << std::endl;
    catbis->makeSound();
}