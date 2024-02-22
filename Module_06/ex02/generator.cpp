#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*   generator(void)
{
    srand(time(NULL));
    int random = (rand() % 3) +1;
    switch (random){
        case 1:
            std::cout << MAGENTA "A instanciate" NC << std::endl;
            return (new A);
        case 2:
            std::cout << MAGENTA "B instanciate" NC << std::endl;
            return (new B);
        case 3:
            std::cout << MAGENTA "C instanciate" NC << std::endl;
            return (new C);
        default:
            std::cout << RED "Error during instance" NC << std::endl;
            return (NULL);
    }
}

void    identify(Base* p)
{
    A* a = dynamic_cast<A *>(p);
    if (a != NULL) {
        std::cout << "\tThe object pointed is an A type" << std::endl;
        return ;
    }
    B* b = dynamic_cast<B *>(p);
    if (b != NULL) {
        std::cout << "\tThe object pointed is an B type" << std::endl;
        return ;
    }
    C* c = dynamic_cast<C *>(p);
    if (c != NULL) {
        std::cout << "\tThe object pointed is an C type" << std::endl;
        return ;
    }
}

void    identify(Base& p)
{
    try {
        A& a = dynamic_cast<A &>(p);
        (void) a;
        std::cout << "\tThe object pointed is an A type" << std::endl;
    }
    catch (std::exception){}
    try {
        B& b = dynamic_cast<B &>(p);
        (void) b;
        std::cout << "\tThe object pointed is an B type" << std::endl;
    }
    catch (std::exception){}
    try {
        C& c = dynamic_cast<C &>(p);
        (void) c;
        std::cout << "\tThe object pointed is an C type" << std::endl;

    }
    catch (std::exception) {}
}