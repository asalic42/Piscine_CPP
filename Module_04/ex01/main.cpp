# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "Brain.hpp"

int main()
{
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    cat->get
    delete cat;//should not create a leak
    delete dog;
    return 0; }