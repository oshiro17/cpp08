#include "Span.hpp"
#include <algorithm>
#include <stdexcept>
#include <limits>

Span::Span() : _n(0) {}

Span::Span(unsigned int n) : _n(n) {}

Span::~Span() {}

Span::Span(const Span& cp) : _n(cp._n), _stock(cp._stock) {}

Span& Span::operator=(const Span& cp) {
    if (this != &cp) {
        _n = cp._n;
        _stock = cp._stock;
    }
    return *this;
}

void Span::addNumber(int n) {
    //     if (_n == 0) {
    //     throw std::runtime_error("");
    // }
    if (_stock.size() >= _n) {
        throw std::runtime_error("Span is full");
    }
    _stock.push_back(n);
}

unsigned int Span::shortestSpan() const {
    if (_stock.size() < 2) {
        throw std::logic_error("Not enough numbers to find a span");
    }

    std::vector<int> sortedStock = _stock;
    std::sort(sortedStock.begin(), sortedStock.end());

    unsigned int minSpan = std::numeric_limits<unsigned int>::max();
    for (size_t i = 1; i < sortedStock.size(); ++i) {
        unsigned int span = sortedStock[i] - sortedStock[i - 1];
        if (span < minSpan) {
            minSpan = span;
        }
    }
    return minSpan;
}

unsigned int Span::longestSpan() const {
    if (_stock.size() < 2) {
        throw std::logic_error("Not enough numbers to find a span");
    }
    int minElement = *std::min_element(_stock.begin(), _stock.end());
    int maxElement = *std::max_element(_stock.begin(), _stock.end());
    return maxElement - minElement;
}
