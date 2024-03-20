#include "RPN.hpp"

RPN::RPN(void) {}

RPN::RPN(const char *str)
{
    
}

RPN::RPN(const RPN& copy)
{
    if (this != &copy)
        *this = copy;
}

RPN& RPN::operator=(const RPN& bis)
{
    if (this != &bis)
        *this = bis;
    return (*this);
}

int RPN::reversePolishNotation(char *str)
{
    int codon = 1;
    char operators [4] = {'+', '-', '*', '/'};
    char *token = strtok(str, " ");
    while (token != NULL)
    {
        if (strlen(token) == 1)
        {
            if (isdigit(token[0]))
            {
                pile.push(atoi(token));
            }
            for (int i=0;operators[i];i++)
            {
                if (token[0] == operators[i])
                {
                    int nb1 = pile.top();
                    pile.pop();
                    int nb2 = pile.top();
                    pile.pop();
                    //switch cases
                    pile.push(nb2 operators[i] nb1)
                }
            }
            else if (token[0] == ' ' && codon % 2 != 0)
                //Error
            
        }
        token = strtok(NULL, " ");
    }

}

RPN::~RPN(void) {}