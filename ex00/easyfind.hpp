#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <algorithm>

class InvalidIndexException : public std::exception {
public:
    const char* what() const throw() { 
        return "Error: Value not found";
    }
};

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    // std::cout << "Container elements: ";
    // for (typename T::iterator it = container.begin(); it != container.end(); ++it) {
    //     std::cout << *it << " ";
    // }
    // std::cout << std::endl;
    typename T::iterator it = std::find(container.begin(), container.end(), value);  
    if (it == container.end()) {
        throw InvalidIndexException();
    }
    return it;
}

#endif
