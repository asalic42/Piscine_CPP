#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <iterator>

# define NC "\033[0m"
# define RED "\033[31;1m"
# define GREEN "\033[32;1m"
# define YELLOW "\033[33;1m"
# define BLUE "\033[34;1m"
# define MAGENTA "\033[35;1m"
# define CYAN "\033[36;1m"
# define WHITE "\033[37;1m"


class Span
{
    private :
        unsigned int     N;
        std::vector<int> tabInt;
    
    public :
        Span(void);
        Span(unsigned int _N);
        Span(const Span& copy);
        Span& operator=(const Span& bis);
        ~Span(void);

        void    addNumber(int number);
        int     shortestSpan(void);
        int     longestSpan(void);

        void     printTabInt(void);

        void    addSequenceNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

        class FullClassException : public std::exception
        {
            public :
                virtual const char *what() const throw() {
                    return (RED "Class full of int" NC); };
        };

        class NotEnoughNumbersException : public std::exception
        {
            public :
                virtual const char *what() const throw() {
                    return (RED "Not enough numbers in the class" NC); }
        };
};

#endif