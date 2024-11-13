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
    	std::cout << "\nNG case " << std::endl;
	{	
		Span sp(5);

		try {
			std::cout << sp.shortestSpan() << std::endl;
		} catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << sp.longestSpan() << std::endl;
		} catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		try {
			sp.addNumber(1);
			sp.addNumber(2);
			sp.addNumber(3);
			sp.addNumber(4);
			sp.addNumber(5);
			sp.addNumber(6);
		} catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}

}