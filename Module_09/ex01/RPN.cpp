#include "RPN.hpp"

RPN::RPN(void) {}

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

void RPN::reversePolishNotation(char *str)
{
    char *token = strtok(str, " ");
    char *end;
    int codon = 0;
    while (token != NULL)
    {
        if (strlen(token) == 1)
        {
            if ((codon == 1 || codon == 2) && !isdigit(token[0]))
                throw ErrorException();
            if (isdigit(token[0]))
                pile.push(std::strtoll(token, &end, 10));
            else if (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/')
            {
                long int nb1 = pile.top();
                pile.pop();
                long int nb2 = pile.top();
                pile.pop();
                switch (token[0])
                {
                    case '+':
                        pile.push(nb2 + nb1); break;
                    case '-':
                        pile.push(nb2 - nb1); break;
                    case '*':
                        pile.push(nb2 * nb1); break;
                    case '/':
                        if (nb1 == 0)
                            throw ErrorException();
                        pile.push(nb2 / nb1); break;
                    default:
                        throw ErrorException();
                }
            }
            else
                throw ErrorException();
        }
        else
            throw ErrorException();
        token = strtok(NULL, " ");
        codon ++;
    }
    if (pile.size() > 1 || pile.top() >= INT_MAX)
        throw ErrorException();
    std::cout << pile.top() << std::endl;
}

RPN::~RPN(void) {}