#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(char *file) {putMapBtc(file);}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
    if (this != &copy)
    {
        mapBtc = copy.mapBtc;
        *this = copy;
    }
}

BitcoinExchange&    BitcoinExchange::operator=(const BitcoinExchange& bis)
{
    if (this != &bis)
    {
        mapBtc = copy.mapBtc;
        *this = bis;
    }
    return (*this);
}

//Put data base into an std::map from BitcoinExchange's class
void    BitcoinExchange::putMapBtc(char *file)
{
    std::ifstream open_file(file);
    if (!open_file)
        std::cerr << RED "Error while opening file" NC << std::endl; //Protect
    std::string line;
    if (!std::getline(open_file, line))
        std::cerr << RED "Error empty file" NC << std::endl;//Protect
    while (std::getline(open_file, line))
    {
        std::istringstream dataline(line);
        std::string date;
        float         nb;
        if (dataline >> date >> nb)
            mapBtc[date] = nb;
        else
            std::cerr << RED "Error while checking data in the file";//Protect
    }
}

void    BitcoinExchange::parseLine(char *data)
{
    std::ifstream datafile(data);
    if (!datafile)
        std::cerr << RED "Error while opening file" NC << std::endl;//Protect
    std::string line;
    while (std::getline(datafile, line))
    {
        std::istringstream dataline;
        std::string date;
        char        sep;
        char        space;
        int         nb;
        if (dataline >> date >> space >> sep >> space >> nb && space == ' ' && sep == '|' && )
    }
}

BitcoinExchange::~BitcoinExchange(void) {}