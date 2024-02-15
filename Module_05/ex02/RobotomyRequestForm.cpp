#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy), _target(copy._target) {}

RobotomyRequestForm&    RobotomyRequestForm::operator=(const RobotomyRequestForm& bis)
{
    if (this != &bis)
        this->_target = bis._target;
    return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() && executor.getGrade() <= this->getExecGrade())
	{
		std::cout << "Brrrrrrrrrrrr" << std::endl;
		std::srand(std::time(0));
		int random = std::rand();
		if (random % 2 == 0)
			std::cout << this->_target << " has been robotomized." << std::endl;
		else
			std::cout << "The robotomy of " << this->_target << " failed." << std::endl;
	}
	else if (this->getSigned() == false)
		throw FormNotSigned();
	else if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}