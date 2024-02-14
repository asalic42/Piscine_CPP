#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;

class   Form
{
    private :
        std::string		_name;
        bool			_signed;
        const int		_minGrade;
        const int		_execGrade;
    
    public :
        Form(void);
        Form(const std::string name, const int minGrade, const int execGrade);
        Form(const Form& copy);
        Form&   operator=(const Form& bis);
        virtual ~Form(void);

        std::string		getName() const;
		bool			getSigned() const;
		int				getMinGrade() const;
		int				getExecGrade() const;

		void			beSigned(Bureaucrat& inst);

        class   GradeTooHighException : public std::exception
        {
            public :
                virtual const char *what() const throw(){
                    return ("Grade too high"); }
        };
        class   GradeTooLowException : public std::exception
        {
            public :
                virtual const char *what() const throw(){
                    return ("Grade too low"); }
        };
};

std::ostream&   operator<<(std::ostream& out, const Form& inst);

#endif