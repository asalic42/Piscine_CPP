#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define RED "\x1b[31m"
# define BLUE "\x1b[34m"
# define YELLOW "\x1b[33m"
# define B_GREEN "\x1b[32;1m"
# define B_PURP "\x1b[35;1m"
# define B_CYAN "\x1b[36;1m"
# define NC "\x1b[0m"

class Brain
{
    public :
        Brain(void);
        Brain(const Brain &copy);
        Brain& operator=(const Brain& bis);
        ~Brain(void);

        void            setIdeas(std::string str) const;
        std::string    getlastIdea(void) const;

    private :
        std::string* ideas;
};

#endif