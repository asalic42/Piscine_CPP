# include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "\x1b[33;1m[ DEBUG ]\x1b[0m" << std::endl;
    std::cout << "\tI love playing violin, especially within a symphony orchestra!\n" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "\x1b[33;1m[ INFO ]\x1b[0m" << std::endl;
    std::cout << "\tI give my time, I practice and I perform in concerts, and it's supposed to be volunteer work?\n" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "\x1b[33;1m[ WARNING ]\x1b[0m" << std::endl;
    std::cout << "\tI think I deserve a promotion. You've been playing for less time than I have, yet you're at a higher rank...\n" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "\x1b[33;1m[ ERROR ]\x1b[0m" << std::endl;
    std::cout << "\tThis music ensemble is completely unfair, I want to leave.\n" << std::endl;
}

void    Harl::complain(std::string level)
{
    void (Harl::*function_ptr[4]) (void) = 
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };

    std::string is_level[4] = {"debug", "info", "warning", "error"};
    int i=0;
    while (!is_level[i].empty() && level != is_level[i]){i++;}
    if (!is_level[i].empty() && level == is_level[i])
    {
        (this->*function_ptr[i])();
        return ;
    }
    std::cout << "Harl doesn't want to speak anymore..." << std::endl;
}
