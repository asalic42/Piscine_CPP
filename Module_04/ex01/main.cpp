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
        cat->getBrain()->setIdea("je suis vivante");
        std::cout << cat->getBrain()->getlastIdea() << std::endl;
    }
    Dog basic;
    basic.getBrain()->setIdea("helloooo je suis ici");
    {
        Dog tmp = basic;
        std::cout << "tmp idea : " << tmp.getBrain()->getlastIdea() << std::endl;
        tmp.getBrain()->setIdea("je suis temporaire");
        std::cout << "tmp idea : " << tmp.getBrain()->getlastIdea() << std::endl;
        std::cout << "basic idea :" << basic.getBrain()->getlastIdea() << std::endl;
    }
    delete cat;
    delete dog;
    return 0;
}