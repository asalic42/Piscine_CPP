#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <iterator>
# include <stack>
# include <deque>

# define NC "\033[0m"
# define RED "\033[31;1m"
# define GREEN "\033[32;1m"
# define YELLOW "\033[33;1m"
# define BLUE "\033[34;1m"
# define MAGENTA "\033[35;1m"
# define CYAN "\033[36;1m"
# define WHITE "\033[37;1m"

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack <T, Container>
{
    public :
        MutantStack(void) {};

        MutantStack(const MutantStack& copy)
        { if (this != &copy) *this = copy; };

        MutantStack&    operator=(const MutantStack& bis)
        {
            if (this != &bis)
                *this = bis;
            return (*this);
        };

        ~MutantStack(void) {};

        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;

        iterator begin(void) {return (this->c.begin());};
        iterator end(void) {return (this->c.end());};
        const_iterator cbegin(void) const {return (this->c.cbegin());};
        const_iterator cend(void) const {return (this->c.cend());};
};

#endif