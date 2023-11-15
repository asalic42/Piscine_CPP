# include <iostream>
# include <string>
# include <cctype>

void alpha_up(std::string typechar)
{
    for (std::size_t i=0; i < typechar.length(); i++)
    {
        std::cout << (char) std::toupper(typechar[i]);
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
