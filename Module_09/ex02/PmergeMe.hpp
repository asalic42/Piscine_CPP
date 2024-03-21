#ifndef PMERGE_HPP
# define PMERGE_HPP

# include <iostream>
# include <list>
# include <vector>
# include <sstream>

# define NC "\033[0m"
# define RED "\033[31;1m"

class PmergeMe
{
    public :
        PmergeMe(void);
        PmergeMe(std::string& str);
        PmergeMe(const PmergeMe& copy);
        PmergeMe& operator=(const PmergeMe& bis);
        ~PmergeMe(void);

        void                inputToVector(void);
        std::vector<int>    mergeVec(std::vector<int> vec);
        std::vector<int>    sortVec(std::vector<int> vec1, std::vector<int> vec2);
    
        class ErrorException : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {return (RED "Error" NC);};
        };

    private :
        std::string input;
        std::vector<int> _v;
        std::list<int>   _l;
};

#endif