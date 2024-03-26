#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <deque>
# include <vector>
# include <cstring>
# include <sstream>
# include <ctime>
# include <climits>
# include <algorithm>
# include <sys/time.h>

# define NC "\033[0m"
# define RED "\033[31;1m"
# define GREEN "\033[32;1m"
# define BLUE "\033[34;1m"
# define CYAN "\033[36;1m"
# define WHITE "\033[37;1m"

class PmergeMe
{
    public :
        PmergeMe(void);
        PmergeMe(std::string& str);
        PmergeMe(const PmergeMe& copy);
        PmergeMe& operator=(const PmergeMe& bis);
        ~PmergeMe(void);

        template <typename T>
            T      mergeInsertSort(T& container);
        void       parseArgs(void);
        void       monitor(void);

        class ErrorException : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {return (RED "Error" NC);};
        };

        class EmptyContainerException : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {return (RED "Error : empty container." NC);};
        };

        class WrongArgsException : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {return (RED "Error : wrong args." NC);};
        };

    private :
        std::string      _input;
        std::vector<int> _v;
        std::deque<int>  _d;
};

#endif