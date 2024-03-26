#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <algorithm>
# include <fstream>
# include <string>
# include <sstream>
# include <map>
# include <ctime>
# include <stdexcept> 

# define NC "\033[0m"
# define RED "\033[31;1m"
# define GREEN "\033[32;1m"
# define YELLOW "\033[33;1m"
# define BLUE "\033[34;1m"
# define MAGENTA "\033[35;1m"
# define CYAN "\033[36;1m"
# define WHITE "\033[37;1m"

class BitcoinExchange
{
    private :
        std::map<std::string, float> mapBtc;

    public :
        BitcoinExchange(void);
        BitcoinExchange(char *file);
        BitcoinExchange(const BitcoinExchange& copy);
        BitcoinExchange& operator=(const BitcoinExchange& bis);
        ~BitcoinExchange(void);

        void    getCurrentDate(int& year, int& month, int& day);
        void    putMapBtc(char *file);
        void    parseLine(char *data);
        void    parseDate(int year, int month, int day, std::string date);
        void    parseNumber(float nb);

        class FileCantBeReadException : public std::exception
        {
            public :
                virtual const char* what() const throw()
                { return (RED "Error: file can't be read." NC); };
        };
        class FileDoesntOpenException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                { return (RED "Error : could not open file." NC ); };
        };
        class NumberOutOfBoundsException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                { return (RED "Error : too large number." NC ); };
        };
        class NumberNegativeException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                { return (RED "Error : number is not a positive number." NC ); };
        };
        class FutureDateException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                { return (RED "Error : date has not yet arrived." NC ); };
        };
        class TooEarlyException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                { return (RED "Error : bitcoins does not yet exist" NC ); };
        };
};

#endif