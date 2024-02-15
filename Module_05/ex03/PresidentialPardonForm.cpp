# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy), _target(copy._target) {}

PresidentialPardonForm&   PresidentialPardonForm::operator=(const PresidentialPardonForm& bis)
{
    if (this != &bis)
        this->_target = bis._target;
    return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
		throw FormNotSigned();
	else if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else
    	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}