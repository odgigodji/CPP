//
// Created by Nelson Amerei on 03.08.21.
//

#include "Span.hpp"
//for abs on linux
#include <cstdlib>

Span::Span() {}

Span::Span(const unsigned int N) {
	std::vector<int> v;
	std::vector<int>::iterator it = v.begin();
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

unsigned int Span::shortestSpan() const
{
	if (_v.size() < 2) { throw  -1; } //throw exception
	else
	{
		unsigned int res;
//		int el1;
//		int	el2;

		std::vector<int>::const_iterator it1;
		std::vector<int>::const_iterator it2;

		it1 = _v.begin();
		it2 = it1 + 1;
		res = static_cast<unsigned int>(abs(*it2 - *it1));
		for(; it1 != _v.end(); ++it1) {
//			el1 = *it1;
			for(; it2 != _v.end(); ++it2) {
				if (*it2 != *it1 && abs(*it2 - *it1) < res ) {
					res = static_cast<unsigned int>(abs(*it2 - *it1));
//					std::cout << "res is " << res << std::endl;
				}
//				el2 = *it2;

			}
			it2 = _v.begin();
		}
//		while(it2 !=_v.end())
//		{
//			el1 = *it1;
//			el2 = *it2;
//
//			if (el2 - el1 < shorts) {
//				shorts = abs(el2 - el1);
//			}
//
//			it1++;
//			it2 = it1 + 1;
//		}
		std::cout << res << std::endl;
		return (res);
	}
}

//int Span::shortestSpan() const {
//	int min1;
//	int min2;
//
//	std::vector<int>::const_iterator it1;
//	std::vector<int>::const_iterator it2;
//	it1 = _v.begin();
//	it2 = it1 + 1;
//	int res = *it2 - *it1;
//
//	while(it2 !=_v.end()) {
//		min1 = *it1;
//		min2 = *it2;
//
//		if (min2 - min1 < res) {
//			res = min2 - min1;
//		}
//
//		it1++;
//		it2 = it1 + 1;
//	}
//	std::cout << "min1 " << min1 << std::endl;
//	std::cout << "min2 " << min2 << std::endl;
//	return res;
//}

unsigned int Span::longestSpan() const {
	return 0;
}

Span::~Span() {
//	delete[] _N;
}

int &Span::operator[](const unsigned int i) {
	if (i > _N) { throw "out of range"; }
	else { return _v[i]; }
}
