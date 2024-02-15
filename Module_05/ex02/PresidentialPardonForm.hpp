#ifndef PRESIDENTIAL_PARDON_FORM
# define PRESIDENTIAL_PARDON_FORM

# include <iostream>
# include "AForm.hpp"

class   PresidentialPardonForm : public AForm
{
    private :
        std::string _target;
    
    public :
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& copy);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& bis);
        virtual ~PresidentialPardonForm(void);

        virtual void    execute(Bureaucrat const & executor) const;
};

#endif