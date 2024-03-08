#include "Span.hpp"

int main()
{

    std::cout << CYAN "\t-----[Check exceptions]-----" NC << std::endl;
    try {
        Span test = Span(0);
        test.addNumber(7);
    }
    catch (std::exception &e)
        {std::cout << e.what() << std::endl;}

    try {
        Span test = Span(2);
        test.addNumber(8);
        test.addNumber(10);
        test.addNumber(2);
    }
    catch (std::exception &e) 
        {std::cout << e.what() << std::endl;}

    try {
        Span min = Span(8);
        min.addNumber(1);
        min.shortestSpan();
    }
    catch (std::exception &e) {std::cout << e.what() << std::endl;}

    try {
        Span max = Span(8);
        max.addNumber(1);
        max.longestSpan();
    }
    catch (std::exception &e) {std::cout << e.what() << std::endl;}

    std::cout << CYAN "\t-----[Check a good test]-----" NC << std::endl;

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11000);
    sp.printTabInt();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << CYAN "\t-----[Check multiple addition container]-----" NC << std::endl;

    std::vector<int> v(10000, 42);
    Span iter(1000000);
    iter.addSequenceNumber(v.begin(), v.end());
    iter.printTabInt();
    return 0;
}