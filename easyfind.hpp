#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <stddef.h> 
#include <exception>

class InvalidIndexException : public std::exception {
public:
    const char* what() const throw() {
        return "Error: Invalid index";
    }
};
template <typename T>
T    *easyfind(T* t, int n)
{
    for(size_t i = 0; t[i] != 0; i++)
    {
        if(t[i] == n)
            return &t[i];
    }
    throw InvalidIndexException();
}


#endif