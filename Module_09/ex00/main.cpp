#include "BitcoinExchange.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
        std::cerr << NOTOPEN << std::endl;
    else
        BitcoinExchange btc("data.csv");
}