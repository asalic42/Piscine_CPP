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

// AForm*  Intern::makeForm(std::string name, std::string target)
// {
//     std::string tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
//     int i=0;
//     while (!tab[i].empty() && name != tab[i]) {i++;}
//     switch (i+1)
//     {
//         case 1:
//             ShrubberyCreationForm *shrub = new ShrubberyCreationForm(target);
//             std::cout << "\t===[Intern creates a Shrubbery Creation Form]===" << std::endl;
//             return (shrub);
//         case 2:
//             RobotomyRequestForm *robot = new RobotomyRequestForm(target);
//             std::cout << "\t===[Intern creates a Robotomy Request Form]===" << std::endl;
//             return (robot);
//         case 3:
//             PresidentialPardonForm *president = new PresidentialPardonForm(target);
//             std::cout << "\t===[Intern creates a Presidential Pardon Form]===" << std::endl;
//             return (president);
//         default:
//             std::cout << "\t===[Form name unknown]===" << std::endl;
//     }
//     return (NULL);
// } //pas bon

Intern::~Intern(void) {}