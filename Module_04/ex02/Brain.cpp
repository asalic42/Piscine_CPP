# include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << B_CYAN "Brain constructor called" NC << std::endl;
    this->ideas = new std::string[100];
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

std::string    Brain::getlastIdea(void) const
{
    int i=0;

    while (!this->ideas[i].empty())
        i ++;
    if (i < 100 && i != 0)
        return (this->ideas[i-1]);
    return ("Idea box is empty");
}

void    Brain::setIdeas(std::string str) const
{
    for (int i=0; i < 100 ; i++)
    {
        if (this->ideas[i].empty())
        {
            this->ideas[i] = str;
            return ;
        }
    }
    std::cout << "Ideas box is full" << std::endl;
}

Brain::~Brain(void)
{
    delete [] ideas;
    std::cout << B_CYAN "Brain destructor called" NC << std::endl;
}
