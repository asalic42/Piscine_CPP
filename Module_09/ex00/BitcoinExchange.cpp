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
        mapBtc = bis.mapBtc;
        *this = bis;
    }
    return (*this);
}

//Put data base into an std::map from BitcoinExchange's class
void    BitcoinExchange::putMapBtc(char *file)
{
    std::ifstream open_file(file);
    if (!open_file)
       {open_file.close(); throw FileDoesntOpenException();}
    std::string line;
    if (!std::getline(open_file, line))
        {open_file.close(); throw FileDoesntOpenException();}
    while (std::getline(open_file, line))
    {
        size_t pos = line.find(',');
        if (pos != std::string::npos)
            mapBtc[line.substr(0, pos)] = std::atof(line.substr(pos +1).c_str());
        else
            {open_file.close(); throw FileCantBeReadException();}
    }
    open_file.close();
}

void    BitcoinExchange::parseLine(char *data)
{
    std::ifstream datafile(data);
    if (!datafile)
        { datafile.close(); throw FileDoesntOpenException();}
    std::string line;
    if (!std::getline(datafile, line))
        {datafile.close(); throw FileDoesntOpenException();}
    if (line.compare("date | value") != 0)
        {datafile.close(); throw FileCantBeReadException();}
    while (std::getline(datafile, line))
    {
        std::string date;
        size_t pos = line.find(" ");
        if (pos != std::string::npos)
            date = line.substr(0, line.find(" "));
        int year, month, day;
        char dash1, dash2, pipe, space1, space2;
        float value;
        char    str[4096];

        int res = std::sscanf(line.c_str(), "%4d%c%2d%c%2d%c%c%c%f%s", &year, &dash1, &month, &dash2, &day, &space1, &pipe, &space2, &value, str);
        try {
            if (res == 9 && dash1 == '-' && dash2 == '-' && space1 == ' ' && space2 == ' ' && pipe == '|')
            {
                parseNumber(value);
                parseDate(year, month, day, line);
                std::map<std::string, float>::iterator it = mapBtc.upper_bound(date);
                it --;
                if (it != mapBtc.end())
                {  
                    std::cout << date << " => " << value << " = " << mapBtc[it->first] * value << std::endl;
                }
            }
            else
                throw std::runtime_error(RED "Error: bad input => " + line + NC);
            }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl; }
    }
    datafile.close();

}

void    BitcoinExchange::parseNumber(float nb)
{
    if (nb < 0)
        throw NumberNegativeException();
    if (nb > 1000)
        throw NumberOutOfBoundsException();
}

void    BitcoinExchange::getCurrentDate(int& year, int& month, int& day)
{
    std::time_t current_time = std::time(NULL);
    std::tm*    localtime = std::localtime(&current_time);

    year = localtime->tm_year + 1900;
    month = localtime->tm_mon + 1;
    day = localtime->tm_mday;
}

void    BitcoinExchange::parseDate(int year, int month, int day, std::string line)
{
    int currentYear, currentMonth, currentDay;

    getCurrentDate(currentYear, currentMonth, currentDay);
    if ((year == 2009 && month == 1 && day == 1) || year < 2009)
        throw TooEarlyException();
    if (year <= 0 || month <= 0 || day <= 0)
        throw std::runtime_error(RED "Error: bad input => " + line + NC);
    if (year > currentYear || (year == currentYear && month > currentMonth) || (year == currentYear && month == currentMonth && day > currentDay))
        throw FutureDateException();
    if (month <= 12)
    {
        if (month == 2)
        {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
                if (day >= 30) throw std::runtime_error(RED "Error: bad input => " + line + NC);}
            else{
                if (day >= 29) throw std::runtime_error(RED "Error: bad input => " + line + NC);}
        }
        else{
            if ((month == 4 || month == 6 || month == 9 || month == 11) && day >= 31)
                throw std::runtime_error(RED "Error: bad input => " + line + NC);
            else if (day >= 32)
                throw std::runtime_error(RED "Error: bad input => " + line + NC );}
    }
}

BitcoinExchange::~BitcoinExchange(void) {}