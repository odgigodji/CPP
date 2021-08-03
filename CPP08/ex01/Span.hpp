//
// Created by Nelson Amerei on 03.08.21.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP
#include <iterator>
#include <vector>

class Span {
private:
	std::vector<int>    _v;
	unsigned int        _N;

	Span();
public:
	Span(const unsigned int N);
	Span(const Span &origin);
	Span &operator=(const Span &rhs);
	~Span();

	void addNumber(const unsigned int _nb);
	unsigned int  shortestSpan() const ;
	unsigned int  longestSpan()  const;
	int &operator[](const unsigned int i);
};


#endif //EX01_SPAN_HPP
