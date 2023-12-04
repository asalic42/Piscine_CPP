# include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << B_CYAN "Brain constructor called" NC << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << B_CYAN "Brain copy constructor called" NC << std::endl;
    *this = copy;
}

Brain&  Brain::operator=(const Brain& bis)
{
    int i=0;
    while (i < 100)
    {
        this->ideas[i] = bis.ideas[i];
    }
    return *this;
}

Brain::~Brain(void)
{
    std::cout << B_CYAN "Brain destructor called" NC << std::endl;
}
