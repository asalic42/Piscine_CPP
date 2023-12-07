# include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << B_CYAN "Brain constructor called" NC << std::endl;
    for (int i = 0; i < 100; i++) {
        ideas[i] = "Nothing";
    }
}

Brain::Brain(const Brain &copy)
{
    std::cout << B_CYAN "Brain copy constructor called" NC << std::endl;
    for (int i=0; i < 100;i++)
        ideas[i] = copy.ideas[i];
}

Brain&  Brain::operator=(const Brain& bis)
{
    for (int i=0; i < 100;i++)
        ideas[i] = bis.ideas[i];
    return *this;
}

std::string    Brain::getlastIdea(void) const
{
    return (this->ideas[99]);
}

void    Brain::setIdea(std::string str)
{
    for (int i=0; i < 100 ; i++)
        this->ideas[i] = str;
}

Brain::~Brain(void)
{
    std::cout << B_CYAN "Brain destructor called" NC << std::endl;
}
