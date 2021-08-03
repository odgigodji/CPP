//
// Created by Nelson Amerei on 03.08.21.
//

#include "Span.hpp"

Span::Span() {}

Span::Span(const unsigned int N) {
//	std::vector<int> v;
//	std::vector<int>::iterator it = v.begin();
	_N = N;
}

Span::Span(const Span &origin) {

}

Span &Span::operator=(const Span &rhs) {

	return *this;
}

void Span::addNumber(const unsigned int _nb) {
	_v.push_back(_nb);
}

unsigned int Span::shortestSpan() const {
	return 0;
}

unsigned int Span::longestSpan() const {
	return 0;
}

Span::~Span() {
//	delete[] _N;
}

int &Span::operator[](const unsigned int i) {
	return _v[i];
}
