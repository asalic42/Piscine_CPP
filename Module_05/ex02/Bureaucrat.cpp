#include "AForm.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name(NULL), _grade(0) {}

Bureaucrat::Bureaucrat(std::string const& name, int grade) : _name(name), _grade(grade)
{
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
    {
        throw GradeTooLowException();
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy.getName()), _grade(copy.getGrade()) {}

std::string Bureaucrat::getName() const { return (this->_name); }

int         Bureaucrat::getGrade() const { return (this->_grade); }

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

void    Bureaucrat::signForm(AForm& inst)
{
    if (inst.getSigned() == true)
        std::cout << "Form is already signed" << std::endl;
    else
    {
        try {
            inst.beSigned(*this);
            std::cout << BLUE "Bureaucrat " << this->_name << " signed " << inst.getName() << NC << std::endl;
        }
        catch (std::exception& e) {
            std::cerr << RED "Bureaucrat " << this->_name << " couldn't sign " << inst.getName() \
            << " because his grade (" << this->getGrade() << ") is too low (required : " << inst.getMinGrade() \
            << ")" NC << std::endl;
        }
    }
}

void    Bureaucrat::executeForm(AForm const & form)
{
    try {
        form.execute(*this);
        std::cout << BLUE "Bureaucrat " << this->_name << " executed " << form.getName() << NC << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << RED "Bureaucrat " << this->_name << " couldn't execute " << form.getName() \
        << " because \"" << e.what() << "\"" NC << std::endl;
    }
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bis)
{
    if (this != &bis)
    {
        this->_name = bis._name;
        this->_grade =bis._grade;
    }
    return (*this);
}

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& instance)
{
    out << YELLOW"Name : " NC << instance.getName() << YELLOW " | Bureaucrat grade : " NC << instance.getGrade();
    return(out);
}

Bureaucrat::~Bureaucrat(void) {}
