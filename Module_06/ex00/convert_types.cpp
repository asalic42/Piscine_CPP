#include "ScalarConverter.hpp"

int is_char(std::string str)
{
    if (str.length() > 1)
        return (0);
    for (char c='\0'; str[c]; c++) {
        if (!std::isprint(str[c]) || (str[c]>= '0' && str[c] <= '9')) {
            return (0);} }
    return (1);
}

int is_float(std::string str)
{
    int find_dot=0;
    if (str.find(".") == std::string::npos || str.find("f") == std::string::npos)
        return (0);
    for (int c=0; str[c]; c++) {
        if (str[c] == '.') {
            find_dot = 1;
            if (str[c+1] && (str[c+1] < '0' || str[c+1] > '9'))  return (0); }
        if (str[c] == 'f' && find_dot == 0) return (0);
        if (!std::isdigit(str[c]) && str[c] != '.' && str[c] != 'f' && str[0] != '-') return (0);
        if (str[c] == '.') {
            c++;
            while (str[c] && str[c] == '0')
                c++;
            if (str[c] == 'f') return (2); }
    }
    return (1);
}

int is_double(std::string str)
{
    if (str.find(".") == std::string::npos)
        return (0);
    for (int c=0; str[c]; c++) {
        if (!std::isdigit(str[c]) && str[c] != '.' && str[c] != '-' && str[c] != 'e' && str[c] != '+')
            return (0); 
        if (str[c] == '.')
        {
            c++;
            while (str[c] && str[c] == '0')
                c++;
            if (!str[c]) return (2);
            else c --;
        }
            }
    return (1);
}

int is_int(std::string str)
{
    if (str[0] == '-' && (str.length() > 11 || (str.length() == 11 && (str[10] > '8' || str[9] > '4' || str[8] > '6' || str[7] > '3' || str[6] > '8' || str[5] > '4' || str[4] > '7' || str[3] > '4' || str[2] > '1' || str[1] > '2'))))
    {
        std::cout << "here\n";
        return (2);
    }
    else if (str[0] != '-' && (str.length() > 10 || (str.length() == 10 && (str[9] > '7' || str[8] > '4' || str[7] > '6' || str[6] > '3' || str[5] > '8' || str[4] > '4' || str[3] > '7' || str[2] > '4' || str[1] > '1' || str[0] > '2'))))
    {
        return (3);
    }
    for (int c=0; str[c]; c++) {
        if (!std::isdigit(str[c]) && str[0] != '-'){
            return (0); }
    }
    return (1);
}

int is_nan(std::string str)
{
    if (str.length() > 1 && std::isprint(str[0]) && (str[0] < '0' || str[0] > '9') && str[0] != '-')
        return (1);
    else {
        for (int i=0; str[i]; i++) {
            if (i != 0 && (str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != 'f' && str[i] != '.')
                return (1);
        }
    }
    return (0);
}
