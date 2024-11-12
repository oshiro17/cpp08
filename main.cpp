#include "easyfind.hpp"
#include <iostream>
#include <cstdlib>

int main(void)
{
    char c = 'a';
    char  arry[] = "abcdegd";

    char *pointer = easyfind(arry,c);
    std::cout<<*pointer<<std::endl;
}