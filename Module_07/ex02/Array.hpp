#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstring>
# include <cstdlib>

# define NC "\033[0m"
# define RED "\033[31;1m"
# define GREEN "\033[32;1m"
# define YELLOW "\033[33;1m"
# define BLUE "\033[34;1m"
# define MAGENTA "\033[35;1m"
# define CYAN "\033[36;1m"
# define WHITE "\033[37;1m"

template <typename T>
class Array
{
    public :
        Array(void) : _elements(NULL), _n(0) {};
        Array(unsigned int n) : _n(n) {this->_elements = new T[n]; };
        Array(const Array& copy) : _n(copy._n) {
            if (this != &copy) {
                this->_elements = new T[_n];
                for (unsigned int i=0; i < _n; i++)
                    this->_elements[i] = copy._elements[i]; }
        };
        Array& operator=(const Array& bis) {
            if (this != &bis) {
                delete[] this->_elements;
                this->_elements = new T[_n];
                for (unsigned int i=0; i < bis.size(); i++)
                    this->_elements[i] = bis._elements[i]; 
            return (*this); }
        };
        ~Array(void) {delete[] _elements;};

        class OutOfBoundsException : public std::exception {
            public :
                virtual const char *what() const throw() {
                    return (RED "Index is out of bounds\n" NC); }
        };

        T&   operator[](const unsigned int i) {
            if (i >= this->size())
                throw OutOfBoundsException();
            return (this->_elements[i]);
        };
        unsigned int size(void) {
            return (this->_n); };
    
    private :
        T*           _elements;
        unsigned int _n;
};

#endif