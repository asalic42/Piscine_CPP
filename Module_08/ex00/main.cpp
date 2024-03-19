#include "easyfind.hpp"

#include <deque>

int main(void)
{
    std::vector<int> tabInt;

    tabInt.push_back(1);
    tabInt.push_back(-73);
    tabInt.push_back(498);
    tabInt.push_back(65);

    for (unsigned int i=0; i < tabInt.size(); i++){
        std::cout << "Int value = " << tabInt[i] << std::endl;
    }
    try{ ::easyfind(tabInt, 30);}
    catch (std::exception &e) {std::cout << e.what() << std::endl;};

    try{ ::easyfind(tabInt, 498);}
    catch (std::exception &e) {std::cout << e.what() << std::endl;};

    tabInt.pop_back();
    tabInt.clear();
}