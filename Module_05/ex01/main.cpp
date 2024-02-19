# include <iostream>
# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"

int	main(void) {

	std::cout << B_CYAN "Form can't be signed by Crat" NC << std::endl;

	try{
		Bureaucrat crat("bob", 60);
		Form form("enquete", 50, 100);

		std::cout << crat << std::endl;
		form.beSigned(crat);
	}
	catch (std::exception& e){
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << B_CYAN"\nBureaucrat can't sign form" NC<< std::endl;

	try{
		Bureaucrat crat("bob", 60);
		Form form("enquete", 50, 50);

		std::cout << crat << std::endl;
		crat.signForm(form);
	}
	catch (std::exception& e){
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << B_CYAN"\nBureaucrat can sign form" NC << std::endl;

	try{
		Bureaucrat crat("bob", 40);
		Form form("enquete", 50, 50);

		std::cout << crat << std::endl;
		crat.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception& e){
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << B_CYAN "\nMultiple bureaucrats" NC << std::endl;

	try{
		Form form("enquete", 50, 50);

		Bureaucrat guy("guy", 85);
		std::cout << guy << std::endl;
		guy.signForm(form);
		std::cout << form << std::endl;

		Bureaucrat man("man", 90);
		std::cout << man << std::endl;
		man.signForm(form);
		std::cout << form << std::endl;

		Bureaucrat woman("woman", 2);
		std::cout << woman << std::endl;
		woman.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}
}