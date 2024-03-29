#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <deque>

# define NC "\033[0m"
# define RED "\033[31;1m"
# define GREEN "\033[32;1m"
# define YELLOW "\033[33;1m"
# define BLUE "\033[34;1m"
# define MAGENTA "\033[35;1m"
# define CYAN "\033[36;1m"
# define WHITE "\033[37;1m"

class NotFoundException : public std::exception
{
    public :
        virtual const char *what() const throw() {
            return (RED "Occurence not found" NC);
        };
};

template <typename T>
void    easyfind(T& type, int num)
{
    typename T::const_iterator it = std::find(type.begin(), type.end(), num);
    if (it == type.end())
        throw NotFoundException();
    else
        std::cout << num << " has been found." << std::endl;
};

#endif