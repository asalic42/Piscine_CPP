#include "Iter.hpp"

int main(void)
{
    int     int_array[5] = {1, 2, 4, 7, 8};
    char    char_array[18] = "Je suis a 42Paris";
    float   float_array[6] = {42.0f, 42.2f, 42.99f, 4.2f, 0.42f, 8.10f};

    std::cout << YELLOW"---[ Iter with print on a char array ]---" NC << std::endl;
    ::iter(char_array, 18, ::print_array);
    std::cout << "\n" << std::endl;

    std::cout << YELLOW"---[ Iter with print/increment/print on an int array ]---" NC << std::endl;
    ::iter(int_array, 5, ::print_array);
    std::cout << std::endl;
    ::iter(int_array, 5, ::increment);
    ::iter(int_array, 5, ::print_array);
    std::cout << "\n" << std::endl;

    std::cout << YELLOW"---[ Iter with print/increment/print on a float array ]---" NC << std::endl;
    ::iter(float_array, 6, ::print_array);
    std::cout << "\n" << std::endl;
    ::iter(float_array, 6, ::increment);
    ::iter(float_array, 6, ::print_array);
    std::cout << "\n" << std::endl;
}