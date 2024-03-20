#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <string>
# include <cstring>
# include <cstdlib>
# include <climits>

# define NC "\033[0m"
# define RED "\033[31;1m"

class RPN
{
    public :
        RPN(void);
        RPN(const RPN& copy);
        RPN& operator=(const RPN& bis);
        ~RPN(void);

        void reversePolishNotation(char* str);

        class ErrorException : public std::exception
        {
            public :
                virtual const char *what() const throw(){
                    return (RED "Error" NC);};
        };

    private :
        std::stack<long int> pile;
};


#endif
