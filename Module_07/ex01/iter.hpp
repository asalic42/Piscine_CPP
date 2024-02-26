#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void    increment(T* array)
{
    array += 1;
};

template <typename T>
void    iter(T& addr, int len, void (*func)(T*))
{
    for (int i=0; i < len; i ++){
        (func)(*addr[i]);}
};

#endif