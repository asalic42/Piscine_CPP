#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <iterator>
# include <stack>
# include <deque>

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