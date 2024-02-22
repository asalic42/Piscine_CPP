#include "ScalarConverter.hpp"

void    print_char(char c)
{
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c)  << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void    print_int(int i)
{
    if (i < 32 || i > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: \'" << static_cast<char>(i) << "\'" << std::endl;
    print_int_float_double(i, static_cast<float>(i), static_cast<double>(i), 1);
}

void    print_float(float f)
{
    if (f < 32 || f > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: \'" << static_cast<char>(f) << "\'" << std::endl;
    print_int_float_double(static_cast<int>(f), f, static_cast<double>(f), 2);
}

void    print_double(double d)
{
    if (d < 32 || d > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: \'" << static_cast<char>(d) << "\'" << std::endl;
    print_int_float_double(static_cast<int>(d), static_cast<float>(d), d, 2);
}

void    print_nan(void)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl; 
}

void    print_inf(char c)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << c << "inf" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

void    print_double_zero(double d)
{
    if (d < 32 || d > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: \'" << static_cast<char>(d) << "\'" << std::endl;
    print_int_float_double(static_cast<int>(d), static_cast<float>(d), d, 1);
}

void    print_float_zero(float f)
{
    if (f < 32 || f > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: \'" << static_cast<char>(f) << "\'" << std::endl;
    print_int_float_double(static_cast<int>(f), f, static_cast<double>(f), 1);
}

void    print_int_float_double(int i, float f, double d, int cod)
{
    if (d < -2147483648.9)
        std::cout << "int: -inf" << std::endl;
    else if (d > 2147483647.9)
        std::cout << "int: +inf" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
    if (f < -2147483648.9 && f < FLOAT_MIN)
        std::cout << "float: -inff" << std::endl;
    else if (f > 2147483647.9 && f > FLOAT_MAX)
        std::cout << "float: +inff" << std::endl;
    else
    {
        if (cod == 1)
            std::cout << "float: " << f << ".0f" << std::endl;
        if (cod == 2)
            std::cout << "float: " << f << "f" << std::endl;
    }
    if (f < -2147483648.9 && d < DOUBLE_MIN)
        std::cout << "double: -inf" << std::endl;
    else if (f > 2147483647.9 && d > DOUBLE_MAX)
        std::cout << "double: +inf" << std::endl;
    else
    {
        if (cod == 1)
            std::cout << "double: " << d << ".0" << std::endl;
        else
            std::cout << "double: " << d << std::endl;
    }
}