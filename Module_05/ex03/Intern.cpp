#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern& copy) { *this = copy; }

Intern&     Intern::operator=(const Intern& bis)
{
    if (this != &bis)
        *this = bis;
    return (*this);
}

AForm*  Intern::makeShrubbery(std::string target) {
    std::cout << "\t===[Intern creates a Shrubbery Creation Form]===" << std::endl;
    return (new ShrubberyCreationForm(target));
}

AForm*  Intern::makeRobotomy(std::string target) {
    std::cout << "\t===[Intern creates a Robotomy Request Form]===" << std::endl;
    return (new RobotomyRequestForm(target));
}

AForm*  Intern::makePresidential(std::string target) {
    std::cout << "\t===[Intern creates a Presidential Pardon Form]===" << std::endl;
    return (new PresidentialPardonForm(target));
}

AForm*  Intern::makeForm(std::string name, std::string target)
{
    std::string tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm*(Intern::*forms[3])(std::string) = {
        &Intern::makeShrubbery,
        &Intern::makeRobotomy,
        &Intern::makePresidential};
    for (int i=0;i < 4;i ++) {
        if (name == tab[i])
            return ((this->*forms[i])(target));
    }
    std::cout << "Form doesn't exist" << std::endl;
    return (NULL);
}

Intern::~Intern(void) {}