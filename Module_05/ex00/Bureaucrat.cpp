#include "Bureaucrat.hpp"

Bureaucrat(void) : _name(NULL), _grade(0) {}

Bureaucrat(std::string const& name, int grade) : _name(name), _grade(grade)
{
    try
    {
        if (_grade >= 1 && _grade <= 150)
        {
            std::cout << "on est good la" << std::endl;
        }
        else
            throw std::exception();
    }
    catch (std::exception& e)
    {
        if (_grade < 1)
            throw Bureaucrat::GradeTooHighException(e);
        else if (_grade > 150)
            throw Bureaucrat::GradeTooLowException(e);
    }
}

