# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int	main(void) {

    std::cout << "\n------------------------------------" << std::endl;
    std::cout << B_GREEN "Create a Shrubbery Form" NC << std::endl;
    std::cout << "------------------------------------\n" << std::endl;
    {
        Intern bobby;
        AForm* form;

        form = bobby.makeForm("shrubbery creation", "pen");
    }
    std::cout << "\n------------------------------------" << std::endl;
    std::cout << B_GREEN "Create a Robotomy Form" NC << std::endl;
    std::cout << "------------------------------------\n" << std::endl;
    {
        Intern bobby;
        AForm* form;

        form = bobby.makeForm("robotomy request", "pen");
    }
    std::cout << "\n------------------------------------" << std::endl;
    std::cout << B_GREEN "Create a Presidential Form" NC << std::endl;
    std::cout << "------------------------------------\n" << std::endl;
    {
        Intern bobby;
        AForm* form;

        form = bobby.makeForm("presidential pardon", "pen");
    }
    std::cout << "\n------------------------------------" << std::endl;
    std::cout << B_GREEN "Form that doesn't exist" NC << std::endl;
    std::cout << "------------------------------------\n" << std::endl;
    {
        Intern bobby;
        AForm* form;

        form = bobby.makeForm("creation", "pen");
    }
}