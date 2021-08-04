//
// Created by Nelson Amerei on 03.08.21.
//

#include "Span.hpp"

Span::Span() {}

Span::Span(const unsigned int N) {
	_N = N;
	_v.reserve(N);
}

Span::Span(const Span &origin) {

}

Span &Span::operator=(const Span &rhs) {

	return *this;
}

void Span::addNumber(const int _nb) {
	static size_t size = 0;
	if (size < _N) {
		_v.push_back(_nb);
		++size;
	} else {
		std::cout << "shit happen" << std::endl;
		throw -2;
	}
	std::cout << "size is " << size << std::endl;

}

unsigned int Span::shortestSpan() const
{
	if (_v.size() < 2) { throw  -1; } //throw exception
	else
	{
		unsigned int res;

		std::vector<int>::const_iterator it1;
		std::vector<int>::const_iterator it2;

		it1 = _v.begin();
		it2 = it1 + 1;
		res = static_cast<unsigned int>(abs(*it2 - *it1));
		for(; it1 != _v.end(); ++it1) {
			for(; it2 != _v.end(); ++it2) {
				if (it2 != it1 && abs(*it2 - *it1) < res ) {
					res = static_cast<unsigned int>(abs(*it2 - *it1));
				}
			}
			it2 = _v.begin();
		}
		return (res);
	}
}

unsigned int Span::longestSpan() const {
	return (static_cast<unsigned int>(*std::max_element(_v.begin(), _v.end()) -
		*std::min_element(_v.begin(), _v.end())));
}

Span::~Span() {
//	delete[] _N;
}

int &Span::operator[](const unsigned int i) {
	if (i > _N) { throw "out of range"; }
	else { return _v[i]; }
}
