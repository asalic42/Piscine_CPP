#ifndef ROBOTOMY_REQUEST_FORM
# define ROBOTOMY_REQUEST_FORM

# include <iostream>
# include "AForm.hpp"

class   RobotomyRequestForm : public AForm
{
    private :
        std::string _target;
    
    public :
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        RobotomyRequestForm&    operator=(const RobotomyRequestForm& bis);
        virtual ~RobotomyRequestForm(void);
};

#endif