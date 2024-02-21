#include "ScalarConverter.hpp"

int is_char(std::string str)
{
    if (str.length() > 1)
        return (0);
    for (char c; str[c]; c++) {
        if (!std::isprint(str[c]) || (str[c]>= '0' && str[c] <= '9'))
        {
            return (0);} }
    return (1);
}

int is_float(std::string str)
{
    if (str.find(".") == std::string::npos || str.find("f") == std::string::npos)
        return (0);
    for (char c; str[c]; c++) {
        if (!std::isdigit(str[c]) && str[c] != '.' && str[c] != 'f')
        {
            return (0);} }
    return (1);
}

int is_double(std::string str)
{
    if (str.find(".") == std::string::npos)
        return (0);
    for (char c; str[c]; c++) {
        if (!std::isdigit(str[c]) && str[c] != '.')
            return (0); }
    return (1);
}

int is_int(std::string str)
{
    for (char c; str[c]; c++) {
        if (!std::isdigit(str[c]) && str[0] != '-')
        {
            return (0); }
            }
    return (1);
}

void    print_char(char c)
{
    std::cout << "char: " << c << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

void    print_int(int i)
{

    std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void    print_float(float f)
{
    std::cout << "hello\n";
    std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
}

void    print_double(double d)
{
    std::cout << "yolo\n";
    std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << d << ".0" << std::endl;
}

void ScalarConverter::convert(std::string str)
{
    const char* c_array = str.c_str(); 
    if (is_char(str))
        print_char(c_array[0]);
    else if (is_float(str))
        print_float(std::atof(c_array));
    else if (is_double(str))
        print_double(std::strtod(c_array, NULL));
    else if (is_int(str))
        print_int(std::atoi(c_array));

}