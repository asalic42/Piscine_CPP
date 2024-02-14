#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>

class Bureaucrat;

class   AForm
{
    private :
        std::string	_name;
        bool		_signed;
        const int	_minGrade;
        const int	_execGrade;
    
    public :
        AForm(void);
        AForm(const std::string name, const int minGrade, const int execGrade);
        AForm(const AForm& copy);
        AForm&   operator=(const AForm& bis);
        virtual ~AForm(void);

        std::string		getName() const;
		bool			getSigned() const;
		int				getMinGrade() const;
		int				getExecGrade() const;

		void	        beSigned(Bureaucrat& inst);
        virtual void    execute(Bureaucrat const & executor) const = 0;

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

std::ostream&   operator<<(std::ostream& out, const AForm& inst);

#endif