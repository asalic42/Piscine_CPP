#include "FileStream.hpp"

int     len_until_space(const char *str)
{
    int     i=0;
    while (str[i] && str[i] != '\n' && str[i] != ' ')
        i ++;
    return (i);
}

void    replace_file(const char *str)
{
    std::ofstream new_file("jesuisun.replace", std::ios::app);
    new_file.is_open();
    std::cout << str << std::endl;
    new_file << str;
    new_file.close();
}


// bool    is_file_good(std::string& filename)
// {
//     std::ifstream   file(filename);
//     return (file.good());
// }    