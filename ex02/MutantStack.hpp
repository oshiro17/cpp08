#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
    public:
        MutantStack() : std::stack<T, Container>() {}
        MutantStack(const MutantStack& other) : std::stack<T, Container>(other) {}
        ~MutantStack() {}

        MutantStack& operator=(const MutantStack& other) {
            if (this != &other) {
                std::stack<T, Container>::operator=(other);
            }
            return *this;
        }

        typename Container::iterator begin() { return this->c.begin(); }
        typename Container::iterator end() { return this->c.end(); }
        typename Container::const_iterator begin() const { return this->c.begin(); }
        typename Container::const_iterator end() const { return this->c.end(); }

        typename Container::reverse_iterator rbegin() { return this->c.rbegin(); }
        typename Container::reverse_iterator rend() { return this->c.rend(); }
        typename Container::const_reverse_iterator rbegin() const { return this->c.rbegin(); }
        typename Container::const_reverse_iterator rend() const { return this->c.rend(); }
};

#endif
