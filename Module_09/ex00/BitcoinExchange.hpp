#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <fstream>

# define NC "\033[0m"
# define RED "\033[31;1m"
# define GREEN "\033[32;1m"
# define YELLOW "\033[33;1m"
# define BLUE "\033[34;1m"
# define MAGENTA "\033[35;1m"
# define CYAN "\033[36;1m"
# define WHITE "\033[37;1m"

# define NOTOPEN RED"Error : could not open file."NC

class BitcoinExchange
{
    private :
        std::map<std::string, float> mapBtc;
        BitcoinExchange(void);
        BitcoinExchange(char *file);
        BitcoinExchange(const BitcoinExchange& copy);
        BitcoinExchange& operator=(const BitcoinExchange& bis);

    public :
        ~BitcoinExchange(void);
        void    putMapBtc(char *file);
        void    parseLine(char *data);
        void    parseDate(char *data);
        void    parseNumber(char *data);
        class FileDoesntOpenException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                { return ("Error : could not open file."); };
        };
}




#endif