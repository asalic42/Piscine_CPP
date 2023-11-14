#include <iostream>

/* Differences between reference and pointers 
    POINTERS:
        * can be a null-pointer,
        * can modified and manipulate a value
    REFERENCES:
        * cannot be null,
        * as an alias, can change a true value through another name, called his reference
*/

int main(void)
{
    std::string brain="HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "ADDRESSES : " << &brain << " " << stringPTR << " " << &stringREF << std::endl;

    std::cout << "VALUES : " << brain << " " << *stringPTR << " " << stringREF << std::endl;
    return (0);
}
