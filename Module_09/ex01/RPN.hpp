#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <string>
# include <cstring>

class RPN
{
    public :
        RPN(void);
        RPN(const char* str);
        RPN(const RPN& copy);
        RPN& operator=(const RPN& bis);
        ~RPN(void);

        int reversePolishNotation(char* str);

    private :
        std::stack<int> pile;
};


#endif
