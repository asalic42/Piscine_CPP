#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

# define RED "\x1b[31m"
# define BLUE "\x1b[34m"
# define YELLOW "\x1b[33m"
# define B_GREEN "\x1b[32;1m"
# define B_PURP "\x1b[35;1m"
# define B_CYAN "\x1b[36;1m"
# define NC "\x1b[0m"

class	Bureaucrat
{
	private :
		std::string	_name;
		int			_grade;

	public :
		Bureaucrat(void);
		Bureaucrat(std::string const& name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat&	operator=(const Bureaucrat& bis);
		virtual ~Bureaucrat(void);

		std::string	getName() const;
		int			getGrade() const;
		void		higherGrade(void);
		void		lowerGrade(void);

		class	GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw(){
					return ("Grade too high");};
		};

		class	GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw(){
					return ("Grade too low");};
		};
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& instance);

#endif