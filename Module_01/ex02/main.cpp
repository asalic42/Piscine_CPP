#include <iostream>
int main(void)
{
    std::string brain="HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "ADDRESSES : " << &brain << " " << stringPTR << " " << &stringREF << std::endl;

    std::cout << "VALUES : " << brain << " " << *stringPTR << " " << stringREF << std::endl;
    return (0);
}
