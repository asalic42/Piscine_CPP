#include "iter.hpp"

int main(void)
{
    char array[3] = "he";

    ::iter(array, 3, ::increment);
}