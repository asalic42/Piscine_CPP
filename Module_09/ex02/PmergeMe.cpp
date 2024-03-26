#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(std::string& str) : _input(str) {}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
    if (this != &copy)
    {
        this->_v  = copy._v;
        this->_d = copy._d;
    }
}

PmergeMe&   PmergeMe::operator=(const PmergeMe& bis)
{
    if (this != &bis)
    {
        this->_v = bis._v;
        this->_d = bis._d;
    }
    return (*this);
}

void    PmergeMe::monitor(void)
{
    parseArgs();

    clock_t startVector = clock();
    _v = mergeInsertSort(_v);
    clock_t stopVector = clock();
    double time_vec = (static_cast<double>(stopVector - startVector) / CLOCKS_PER_SEC) * 1000000;

    clock_t startDeque = clock();
    _d = mergeInsertSort(_d);
    clock_t stopDeque = clock();
    double time_deq = (static_cast<double>(stopDeque - startDeque) / CLOCKS_PER_SEC) * 1000000;

    std::cout << GREEN "======[VECTOR CONTAINER]======" NC << std::endl;
    std::cout << WHITE "Before : " NC << _input << std::endl;
    std::cout << WHITE "After : " NC ;
    int sizeVector = 0;
    for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it ++, sizeVector ++)
        std::cout << *it << " ";
    std::cout << WHITE"\nTime to process a range of " << sizeVector << " elements  : " NC << time_vec << " ms.\n" << std::endl;

    std::cout << GREEN "======[DEQUE CONTAINER]======" NC << std::endl;
    std::cout << WHITE "Before : " NC << _input << std::endl;
    std::cout << WHITE "After : " NC ;
    int sizeDeque = 0;
    for (std::deque<int>::iterator it = _d.begin(); it != _d.end(); it ++, sizeDeque ++)
        std::cout << *it << " ";
    std::cout << WHITE"\nTime to process a range of " << sizeDeque << " elements : " NC << time_deq << " ms." << std::endl;
}

void    PmergeMe::parseArgs(void)
{
    for (std::string::iterator it = _input.begin(); it != _input.end(); it++)
    {
        if (!isdigit(*it) && *it != ' ')
            throw WrongArgsException();
    }
    std::stringstream iss(_input);
    long int nb;
    while (iss >> nb)
    {
        if (nb > INT_MAX)
            throw WrongArgsException();
        _v.push_back(nb);
        _d.push_back(nb);
    }
    if (_v.empty() || _d.empty())
        throw EmptyContainerException();
}

template <typename T>
T      PmergeMe::mergeInsertSort(T& container)
{
    T tmpA;
    T tmpB;
    for (typename T::iterator it = container.begin(); it < container.end(); it += 2)
    {
        if (it+1 == container.end())
            tmpB.push_back(*(it));
        else if (*it >= *(it+1))
        {
            tmpB.push_back(*it);
            tmpA.push_back(*(it +1));
        }
        else
        {
            tmpA.push_back(*it);
            tmpB.push_back(*(it+1));
        }
    }
    if (tmpA.size() > 1)
        tmpA = mergeInsertSort(tmpA);
    typename T::iterator ite;
    while (tmpB.size())
    {
        ite = tmpA.begin();
        for (; ite != tmpA.end() && *ite <= tmpB.back(); ite++) {}
        tmpA.insert(ite, tmpB.back());
        tmpB.pop_back();
    }
    return (tmpA);
}

PmergeMe::~PmergeMe(void) {}