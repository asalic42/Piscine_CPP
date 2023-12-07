# include "Brain.hpp"
# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    // const Animal* notAnimal = new Animal(); class abstract error

    if (cat->getBrain())
    {
        std::cout << "There is a brain in here" << std::endl;
        cat->getBrain()->setIdea("je suis vivante");
        std::cout << cat->getBrain()->getlastIdea() << std::endl;
    }
    delete cat;
    delete dog;
    return 0;
}
