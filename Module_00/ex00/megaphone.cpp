#include <iostream>
#include <string>
using namespace std;

void alpha_up(char *str)
{
    int i=0;

    while (str[i])
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
        std::cout << str[i];
        i ++;
    }
}

int main(int argc, char **argv)
{
    int i = 1;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < argc)
        {
            alpha_up(argv[i]);
            i ++;
        }
        std::cout << std::endl;
    }
    return 0;
}
