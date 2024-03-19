#include "BitcoinExchange.hpp"

int main(int ac, char *av[])
{
    char data[9] = "data.csv";
    if (ac != 2)
        std::cerr << RED "\nError : could not open file.\n" NC << std::endl;
    else
    {
        try {
            BitcoinExchange btc(data);
            btc.parseLine(av[1]); }
        catch(std::exception &e)
            { std::cout << e.what() << std::endl; }
    }
}