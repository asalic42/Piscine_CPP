#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

# define NC "\033[0m"
# define RED "\033[31;1m"
# define GREEN "\033[32;1m"
# define YELLOW "\033[33;1m"
# define BLUE "\033[34;1m"
# define MAGENTA "\033[35;1m"
# define CYAN "\033[36;1m"
# define WHITE "\033[37;1m"

template <typename T>
void    print_array(T& array)
{
    std::cout << array << " ";
};

template <typename T>
void    increment(T& array)
{
    array ++;
};

template <typename T>
void    iter(const T* addr, int len, void (*func)(const T&))
{
    for (int i=0; i < len; i ++){
        (func)(addr[i]);}
};

template <typename T>
void    iter(T* addr, int len, void (*func)(T&))
{
    for (int i=0; i < len; i ++){
        (func)(addr[i]);}
};

#endif