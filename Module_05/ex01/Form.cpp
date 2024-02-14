#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(void) : _name(NULL), _signed(false), _minGrade(150), _execGrade(150) {}

Form::Form(const std::string name, const int minGrade, const int execGrade) : _name(name), _signed(false), _minGrade(minGrade), _execGrade(execGrade)
{
    if (execGrade > minGrade)
        std::cout << RED"WARNING : Minimum grade should be higher than the execute grade" NC << std::endl;
}

Form::Form(const Form& copy) : _name(copy.getName()), _signed(copy.getSigned()), _minGrade(copy.getMinGrade()), _execGrade(copy.getExecGrade())
{
    if (this->_execGrade < this->_minGrade)
    {
        std::cout << RED"Minimum grade should be higher than the execute grade" NC << std::endl;
        return ;
    }
}

std::string Form::getName() const { return (this->_name); }

bool        Form::getSigned() const { return (this->_signed); }

int         Form::getMinGrade() const { return (this->_minGrade); }

int         Form::getExecGrade() const { return (this->_execGrade); }

void    Form::beSigned(Bureaucrat& inst)
{
    if (inst.getGrade() > this->_minGrade)
        throw GradeTooLowException();
    else
        this->_signed = true;
}

Form&   Form::operator=(const Form& bis)
{
    if (this != &bis)
    {
        this->_name = bis.getName();
        this->_signed = bis.getSigned();
        this->_minGrade = bis.getMinGrade();
        this->_execGrade = bis.getExecGrade();
    }
    return (*this);
}

std::ostream&   operator<<(std::ostream& out, const Form& inst)
{
    out << PURP "Form name : " NC << inst.getName() << PURP " | Signed : " NC << inst.getSigned() \
    << PURP" | Min. Grade : " NC << inst.getMinGrade() << PURP " | Exec. Grade : " NC \
    << inst.getExecGrade() << std::endl;
    return (out);
}

Form::~Form(void) {}