#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>

# define NC      "\033[0m"
# define RED     "\033[31;1m"
# define GREEN   "\033[32;1m"
# define YELLOW  "\033[33;1m"
# define BLUE    "\033[34;1m"
# define MAGENTA "\033[35;1m"
# define CYAN    "\033[36;1m"
# define WHITE   "\033[37;1m"

class Base
{
    public :
        Base(void) {};
        virtual ~Base(void) {};
};

Base*   generator(void);
void    identify(Base* p);
void    identify(Base& p);

#endif