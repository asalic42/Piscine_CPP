#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

class Brain
{
    public :
        Brain(void);
        Brain(const Brain &copy);
        Brain& operator=(const Brain& bis);
        ~Brain(void);

    private :
        std::string ideas[100];
};

#endif