#include "PmergeMe.hpp"

int main(int ac, char *av[])
{
    (void)av;
    if (ac < 2)
        std::cout << RED "Error : wrong args" NC << std::endl;
    else
    {
        std::string input;
        for (int i=1; i < ac; i ++)
        {
            input.append(av[i]);
            if (i <= ac -2)
                input.append(" ");
        }
        try {
            PmergeMe instance(input);
            instance.monitor();
        }
        catch (std::exception &e) {std::cout << e.what() << std::endl;}
    }
}
