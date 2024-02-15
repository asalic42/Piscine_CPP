#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"
class Bureaucrat;

class   ShrubberyCreationForm : public AForm
{
    private :
        std::string _target;

    public :
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& bis);
        virtual ~ShrubberyCreationForm(void);

        virtual void    execute(Bureaucrat const & executor) const;
};

#define  TREES  \
"         .     .  .      +     .      .          ." << std::endl << \
"     .       .      .     #       .           ." << std::endl << \
"        .      .         ###            .      .      ." << std::endl << \
"      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl << \
"          .      . \"####\"###\"####\"  ." << std::endl << \
"       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl << \
"  .             \"#########\"#########\"        .        ." << std::endl << \
"        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl << \
"     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl << \
"                .\"##\"#####\"#####\"##\"           .      ." << std::endl << \
"    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl << \
"      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl << \
"    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl << \
"            .     \"      000      \"    .     ." << std::endl << \
"       .         .   .   000     .        .       ." << std::endl << \
".. .. ..................O000O........................ ......"

#endif