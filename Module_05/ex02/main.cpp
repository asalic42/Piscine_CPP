// # include <iostream>
// # include <string>
# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int	main(void) {

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << B_GREEN "Form Shrubbery" NC << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    {
        ShrubberyCreationForm tree("tree");
        Bureaucrat paul("paul", 150);
        paul.signForm(tree);
        Bureaucrat boy("boy", 140);
        boy.signForm(tree);
        boy.executeForm(tree);
        Bureaucrat baba("baba", 90);
        baba.executeForm(tree);
        baba.signForm(tree);
        baba.executeForm(tree);
    }

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << B_GREEN "Form Robotomy" NC << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    {
        RobotomyRequestForm rob("rob");
        Bureaucrat paul("paul", 75);
        paul.signForm(rob);
        Bureaucrat boy("boy", 60);
        boy.signForm(rob);
        boy.executeForm(rob);
        Bureaucrat baba("baba", 30);
        baba.executeForm(rob);
        baba.signForm(rob);
        baba.executeForm(rob);
    }

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << B_GREEN "Form Presidential" NC << std::endl;
    std::cout << "------------------------------------\n" << std::endl;

    {
        PresidentialPardonForm up("Jean Paul");
        Bureaucrat paul("paul", 30);
        paul.signForm(up);
        Bureaucrat boy("boy", 25);
        boy.signForm(up);
        boy.executeForm(up);
        Bureaucrat baba("baba", 1);
        baba.executeForm(up);
        baba.signForm(up);
        baba.executeForm(up);
    }
}