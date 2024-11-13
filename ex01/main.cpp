#include <iostream>
#include "Span.hpp"
#include <vector>
#include <list>

int main(void)
{
    try
    {
        Span sp(5);

        sp.addNumber(1);
        sp.addNumber(7);
        sp.addNumber(10);
        sp.addNumber(20);
        sp.addNumber(30);
        // sp.addNumber(40);
         std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

}