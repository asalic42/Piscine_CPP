# include "Brain.hpp"
# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    if (cat->getBrain())
    {
        std::cout << "There is a brain in here" << std::endl;
        cat->getBrain()->setIdeas("je suis vivante");
        std::cout << cat->getBrain()->getlastIdea() << std::endl;
    }
    delete cat;//should not create a leak
    delete dog;
    return 0;
}