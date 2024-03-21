#include "PmergeMe.hpp"
#include <cstring>
int main(int ac, char *av[])
{
    (void)av;
    if (ac < 2)
        std::cout << "Error" << std::endl;
    else
    {
        std::string input;
        for (int i=1; i < ac; i ++)
        {
            input.append(av[i]);
            if (i <= ac -2)
                input.append(" ");
        }
        PmergeMe instance(input);
        
    }
}

    // PmergeMe test;
    // int nb[8] = {2, 6, 1, 5, 15, 11, 4, 7};
    // std::vector<int> v;
    // for (int i=0; i < 8; i ++)
    //     {v.push_back(nb[i]);
    //     std::cout << nb[i] << std::endl;}
    // std::cout << std::endl;
    // for (std::vector<int>::const_iterator it = v.begin(); it < v.end(); it ++)
    //     std::cout << *it << std::endl;
    // std::cout << std::endl;
    // std::vector<int> v_result = test.mergeVec(v);
    // for (std::vector<int>::const_iterator it = v_result.begin(); it < v_result.end(); it ++)
    //     std::cout << *it << std::endl;