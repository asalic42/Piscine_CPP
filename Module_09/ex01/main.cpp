#include "RPN.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
        std::cout << RED "Error" NC << std::endl;
    else
    {
        try{
            RPN calculator;
            calculator.reversePolishNotation(av[1]); }
        catch (std::exception &e)
        { std::cout << e.what() << std::endl; }
    }
}