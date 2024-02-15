#ifndef INTER_HPP
# define INTER_HPP

# include <iostream>
# include "AForm.hpp"

class   Intern
{
    public :
        Intern(void);
        Intern(const Intern& copy);
        Intern& operator=(const Intern& bis);
        virtual ~Intern(void);
    
        AForm*  makeForm(std::string name, std::string target);
};

#endif