# include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
        std::cout << "Args required = 2" << std::endl;
    ScalarConverter::convert(av[ac -1]);
}