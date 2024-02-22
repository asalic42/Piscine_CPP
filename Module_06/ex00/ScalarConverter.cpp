#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {(void)copy;}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& bis) {(void)bis; return (*this);};

ScalarConverter::~ScalarConverter(void) {};

void ScalarConverter::convert(std::string str)
{
    const char* c_array = str.c_str(); 
    if (is_nan(str)) print_nan();
    else if (is_char(str)) print_char(c_array[0]);
    else if (is_float(str) == 2) print_float_zero(std::atof(c_array));
    else if (is_float(str) == 1) print_float(std::atof(c_array));
    else if (is_double(str) == 2) print_double_zero(std::strtod(c_array, NULL));
    else if (is_double(str) == 1) print_double(std::strtod(c_array, NULL));
    else if (is_int(str) == 2) print_inf('-');
    else if (is_int(str) == 3) print_inf('+');
    else if (is_int(str) == 1) print_int(std::atoi(c_array));
    else print_nan();

}