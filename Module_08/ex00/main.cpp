#include "easyfind.hpp"

int main(void)
{
    std::deque<int> tabDeque;

    std::cout << CYAN "-----[Try to find 0 in an empty container]-----" NC << std::endl;
    try{::easyfind(tabDeque, 0);}
    catch (std::exception &e) {std::cout << e.what() << std::endl;}

    std::vector<int> tabInt;

    tabInt.push_back(1);
    tabInt.push_back(-73);
    tabInt.push_back(498);
    tabInt.push_back(65);

    std::cout << "\nNumber tab : {";
    for (std::vector<int>::const_iterator it = tabInt.begin(); it < tabInt.end(); it++){
        if (it == tabInt.end() -1)
            std::cout << *it << "}" << std::endl;
        else
            std::cout << *it << ", ";
    }

    std::cout << CYAN "\n-----[Try to find 30]-----" NC << std::endl;
    try{ ::easyfind(tabInt, 30);}
    catch (std::exception &e) {std::cout << e.what() << std::endl;};

    std::cout << CYAN "\n-----[Try to find 0]-----" NC << std::endl;
    try{ ::easyfind(tabInt, 0);}
    catch (std::exception &e) {std::cout << e.what() << std::endl;};

    std::cout << CYAN "\n-----[Try to find 65]-----" NC << std::endl;
    try{ ::easyfind(tabInt, 65);}
    catch (std::exception &e) {std::cout << e.what() << std::endl;};

    std::cout << CYAN "\n-----[Try to find 498]-----" NC << std::endl;
    try{ ::easyfind(tabInt, 498);}
    catch (std::exception &e) {std::cout << e.what() << std::endl;};

    tabInt.pop_back();
    tabInt.clear();
}