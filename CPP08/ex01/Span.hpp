//
// Created by Nelson Amerei on 03.08.21.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP


class Span {
private:
	unsigned int *_ints;
	unsigned int _N;

public:
	Span();
	Span(const unsigned int N);
	Span(const Span &origin);
	Span &operator=(const Span &rhs);

	void addNumber(const unsigned int _nb);
	unsigned int  shortestSpan() const ;
	unsigned int  longestSpan()  const;
};


#endif //EX01_SPAN_HPP
