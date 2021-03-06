//
// Created by Nelson Amerei on 03.08.21.
//

#include "Span.hpp"
# define MAG 	"\x1b[35m"
# define RESET	"\x1b[0m"

Span::Span() {}

Span::Span(const unsigned int N) : _N(N), _size(0) {
	_v.reserve(N);
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
		throw SomethingWrong(MAG"Out of size."RESET);
	}
}

void Span::addNumbers(const std::vector<int> _nbs) {
	if (get_size() + _nbs.size() <= get_N()) {
		_v.insert(_v.end(), _nbs.begin(), _nbs.end());
		_size += _nbs.size();
	} else {
		throw SomethingWrong(MAG"Out of size."RESET);
	}
}

unsigned int Span::shortestSpan() const
{
	if (_v.size() < 2) { throw  SomethingWrong(MAG"Less than 2 elem in array."RESET); }
	else
	{
		unsigned int res = 0;

		std::vector<int>::const_iterator it1;
		std::vector<int>::const_iterator it2;

		it1 = _v.begin();
		it2 = it1 + 1;
		res = static_cast<unsigned int>(abs(*it2 - *it1));
		for(; it1 != _v.end(); ++it1) {
			for(; it2 != _v.end(); ++it2) {
				if (it2 != it1 && abs(*it2 - *it1) < (int)res ) {
					res = static_cast<unsigned int>(abs(*it2 - *it1));
				}
			}
			it2 = _v.begin();
		}
		return (res);
	}
}

unsigned int Span::longestSpan() const {
	if (_v.size() < 2) { throw SomethingWrong(MAG"Less than 2 elem in array."RESET); }
	return (static_cast<unsigned int>(*std::max_element(_v.begin(), _v.end()) -
		*std::min_element(_v.begin(), _v.end())));
}

Span::~Span() {}

int &Span::operator[](const unsigned int i) {
	if (i > _N) { throw SomethingWrong(MAG"Out of range."RESET); ; }
	else { return _v[i]; }
}

std::ostream &operator<<(std::ostream &oS, const Span &span) {
	for(std::vector<int>::const_iterator it = span.get_v().begin(); it != span.get_v().end(); ++it) {
		oS << *it << " ";
	}
	return oS;
}

//getters:
const std::vector<int> &Span::get_v() const { return _v; }
unsigned int Span::get_N() const { return _N; }
unsigned int Span::get_size() const { return _size; }