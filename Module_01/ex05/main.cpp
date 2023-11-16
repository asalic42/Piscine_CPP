# include "Harl.hpp"

/* Discovering of Pointers on member functions
    * Using member functions without knowing which one 
        from the start and without using a forest of if/else if/else.*/

int main(void)
{
    Harl    harl;

    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
    return 0;
}