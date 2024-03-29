#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name(NULL), _grade(0) {}

Bureaucrat::Bureaucrat(std::string const& name, int grade) : _name(name), _grade(grade)
{
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy.getName()), _grade(copy.getGrade()) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bis)
{
    if (this != &bis)
    {
        this->_name = bis._name;
        this->_grade =bis._grade;
    }
    return (*this);
}

std::string Bureaucrat::getName() const { return (this->_name); }

int Bureaucrat::getGrade() const { return (this->_grade); }

void    Bureaucrat::higherGrade(void)
{
    this->_grade = this->getGrade() -1;
    if (_grade < 1)
        throw GradeTooHighException();
}

void    Bureaucrat::lowerGrade(void)
{
    this->_grade = this->getGrade() +1;
    if (_grade > 150)
        throw GradeTooLowException();
}

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& instance)
{
    out << YELLOW"Name : " NC << instance.getName() << YELLOW " | Bureaucrat grade : " NC << instance.getGrade();
    return(out);
}

Bureaucrat::~Bureaucrat(void) {}
