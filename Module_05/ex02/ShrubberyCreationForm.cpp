#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy), _target(copy._target) {}

ShrubberyCreationForm&   ShrubberyCreationForm::operator=(const ShrubberyCreationForm& bis)
{
    if (this != &bis)
        this->_target = bis._target;
    return (*this);
}

void    ShrubberyCreationForm::execute(void) const
{
    std::string filename = this->_target;
    filename.append("_shrubbery");
    std::ofstream shrubfile(filename.c_str());
    if (!shrubfile.is_open())
    {
        std::cerr << RED "Error while opening the ofstream" NC << std::endl;
        return ;
    }
    shrubfile << TREES;
    shrubfile.close();
    std::cout << B_CYAN "file successfully created" NC << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}