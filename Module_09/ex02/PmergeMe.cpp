#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(std::string& str) : input(str)
{
    inputToVector();
    _v = mergeVec(_v);
    std::cout << std::endl;
    for (std::vector<int>::const_iterator it = _v.begin(); it < _v.end(); it ++)
        std::cout << *it << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
    if (this != &copy)
    {
        this->input  = copy.input;
        this->_l = copy._l;
    }
}

PmergeMe&   PmergeMe::operator=(const PmergeMe& bis)
{
    if (this != &bis)
    {
        this->input = bis.input;
        this->_l = bis._l;
    }
    return (*this);
}

void       PmergeMe::inputToVector(void)
{
    std::stringstream iss(input);
    int nb;
    while (iss >> nb)
        _v.push_back(nb);
    for (std::vector<int>::const_iterator it=_v.begin(); it < _v.end(); it ++)
        std::cout << *it << std::endl;
}

std::vector<int>    PmergeMe::sortVec(std::vector<int> vec1, std::vector<int> vec2)
{
    size_t i = 0;
    size_t j = 0;
    std::vector<int> result;
    while (i < vec1.size() && j < vec2.size())
    {
        if (vec1[i] < vec2[j])
            result.push_back(vec1[i++]);
        else
            result.push_back(vec2[j++]);
    }
    for (;i < vec1.size(); ++i)
        result.push_back(vec1[i]);
    for (;j < vec2.size(); ++j)
        result.push_back(vec2[j]);
    return result;
}

std::vector<int>    PmergeMe::mergeVec(std::vector<int> vec)
{
    if (vec.size() <= 1)
        return (vec);
    int mid = vec.size() / 2;
    std::vector<int>::const_iterator itBegin = vec.begin();
    std::vector <int>::const_iterator itHalfBegin = vec.begin();
    std::advance(itHalfBegin, mid);

    std::vector<int>::const_iterator itSecondHalf = vec.begin();
    std::vector<int>::const_iterator itEnd = vec.end();
    std::advance(itSecondHalf, mid);

    std::vector<int> firstHalf;
    for (std::vector<int>::const_iterator it = itBegin; it < itHalfBegin ; it ++)
        firstHalf.push_back(*it);

    std::vector<int> secondHalf;
    for (std::vector<int>::const_iterator it = itSecondHalf; it < itEnd; it ++)
        secondHalf.push_back(*it);
    return (sortVec(mergeVec(firstHalf), mergeVec(secondHalf)));    
}


PmergeMe::~PmergeMe(void) {}