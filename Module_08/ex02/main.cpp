#include "MutantStack.hpp"
#include <list>
int main()
{
    std::cout << YELLOW "\n>> TEST MUTANTSTACK <<" NC << std::endl;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Stack top number: " << mstack.top() << std::endl;
    std::cout << "Stack size: "<< mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(1);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    it++;
    it--;
    while (it >= mstack.begin() && it != ite)
    {
        std::cout << *it << std::endl;
        it++;
    }

    std::cout << YELLOW "\n>> TEST LIST <<" NC << std::endl;

    std::list<int>    mlist;
    mlist.push_back(5);
    mlist.push_back(17);
    std::list<int>::iterator iter2 = mlist.end();
    std::list<int>::iterator iter = mlist.begin();
    for (; iter != iter2; ++iter)
        std::cout << "List last add number: " << *iter << std::endl;
    std::cout << "List size: "<< mlist.size() << std::endl;
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    mlist.push_back(1);
    std::list<int>::iterator i = mlist.begin();
    std::list<int>::iterator i2 = mlist.end();
    i++;
    i--;
    while (*i && i != i2)
    {
        std::cout << *i << std::endl;
        i++;
    }
    return 0;
}