# include "Brain.hpp"
# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << cat->getBrain() << std::endl;

    delete cat;//should not create a leak
    delete dog;
    return 0;
}