//
// Created by Nelson Amerei on 03.08.21.
//

#include "Span.hpp"

Span::Span() {}

Span::Span(const unsigned int N) {
	_N = N;
	_v.reserve(N);
	_size = 0;
}

Span::Span(const Span &origin) {
	_N = origin.get_N();
	_v = origin.get_v();
	_size = origin.get_size();
}

Span &Span::operator=(const Span &rhs) {
	_N = rhs.get_N();
	_v = rhs.get_v();
	_size = rhs.get_size();
	return *this;
}

void Span::addNumber(const int _nb) {
	if (get_size() < _N) {
		_v.push_back(_nb);
		++_size;
	} else {
		throw -1;
	}
}

unsigned int Span::shortestSpan() const
{
	if (_v.size() < 2) { throw  SomethingWrong("aboba"); }
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
	if (_v.size() < 2) { throw -2; }
	return (static_cast<unsigned int>(*std::max_element(_v.begin(), _v.end()) -
		*std::min_element(_v.begin(), _v.end())));
}

Span::~Span() {}

int &Span::operator[](const unsigned int i) {
	if (i > _N) { throw -3; }
	else { return _v[i]; }
}

//getters:
const std::vector<int> &Span::get_v() const { return _v; }
unsigned int Span::get_N() const { return _N; }
unsigned int Span::get_size() const { return _size; }