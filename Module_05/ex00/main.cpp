# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

int	main(void) {

	std::cout << B_CYAN << "\nIncrementing too high" << NC << std::endl;
	try {
		Bureaucrat newGuy("newGuy", 3);
		std::cout << newGuy << std::endl;
		newGuy.higherGrade();
		std::cout << newGuy << std::endl;
		newGuy.higherGrade();
		std::cout << newGuy << std::endl;
		newGuy.higherGrade();
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}
	std::cout << B_CYAN << "\nDecrementing too high" << NC << std::endl;
	try {
		Bureaucrat newGuy("newGuy", 148);
		std::cout << newGuy << std::endl;
		newGuy.lowerGrade();
		std::cout << newGuy << std::endl;
		newGuy.lowerGrade();
		std::cout << newGuy << std::endl;
		newGuy.lowerGrade();
		std::cout << newGuy << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << B_CYAN << "\nInitialization too low" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 151);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << B_CYAN << "\nInitialization too high" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 0);
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << B_CYAN << "\nInitialization at upper limit" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 1);
		std::cout << newGuy << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << B_CYAN << "\nInitialization at lower limit" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 150);
		std::cout << newGuy << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << B_CYAN << "\nDecrementing then incrementing" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 5);
		std::cout << newGuy << std::endl;
		newGuy.lowerGrade();
		std::cout << newGuy << std::endl;
		newGuy.lowerGrade();
		std::cout << newGuy << std::endl;
		newGuy.lowerGrade();

		std::cout << newGuy << std::endl;
		newGuy.higherGrade();
		std::cout << newGuy << std::endl;
		newGuy.higherGrade();
		std::cout << newGuy << std::endl;
		newGuy.higherGrade();
		std::cout << newGuy << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}

	std::cout << B_CYAN << "\nIncrementing then Decrementing" << NC << std::endl;

	try {
		Bureaucrat newGuy("newGuy", 5);
		std::cout << newGuy << std::endl;
		newGuy.higherGrade();
		std::cout << newGuy << std::endl;
		newGuy.higherGrade();
		std::cout << newGuy << std::endl;
		newGuy.higherGrade();
	
		std::cout << newGuy << std::endl;
		newGuy.lowerGrade();
		std::cout << newGuy << std::endl;
		newGuy.lowerGrade();
		std::cout << newGuy << std::endl;
		newGuy.lowerGrade();
		std::cout << newGuy << std::endl;

        Bureaucrat bis = newGuy;
        std::cout << bis << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << NC << std::endl;
	}
}