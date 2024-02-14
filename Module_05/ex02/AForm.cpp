#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(void) : _name(NULL), _signed(false), _minGrade(150), _execGrade(150) {}

AForm::AForm(const std::string name, const int minGrade, const int execGrade) : _name(name), _signed(false), _minGrade(minGrade), _execGrade(execGrade)
{
    if (execGrade > minGrade)
        std::cout << RED"WARNING : Minimum grade should be higher than the execute grade" NC << std::endl;
}

AForm::AForm(const AForm& copy) : _name(copy.getName()), _signed(copy.getSigned()), _minGrade(copy.getMinGrade()), _execGrade(copy.getExecGrade())
{
    if (this->_execGrade < this->_minGrade)
    {
        std::cout << RED"Minimum grade should be higher than the execute grade" NC << std::endl;
        return ;
    }
}

std::string AForm::getName() const { return (this->_name); }

bool        AForm::getSigned() const { return (this->_signed); }

int         AForm::getMinGrade() const { return (this->_minGrade); }

int         AForm::getExecGrade() const { return (this->_execGrade); }

void    AForm::beSigned(Bureaucrat& inst)
{
    if (inst.getGrade() > this->_minGrade)
        throw GradeTooLowException();
    else
        this->_signed = true;
}

AForm&   AForm::operator=(const AForm& bis)
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

std::ostream&   operator<<(std::ostream& out, const AForm& inst)
{
    out << PURP "AForm name : " NC << inst.getName() << PURP " | Signed : " NC << inst.getSigned() \
    << PURP" | Min. Grade : " NC << inst.getMinGrade() << PURP " | Exec. Grade : " NC \
    << inst.getExecGrade() << std::endl;
    return (out);
}

AForm::~AForm(void) {}