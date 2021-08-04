//
// Created by Nelson Amerei on 03.08.21.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP
#include <vector>
#include <iostream>
#include <cmath>     //for abs
#include <algorithm> //for std::min/max_element
#include <stdexcept>
#include <exception>

class Span {
private:
	std::vector<int>    _v;
	unsigned int        _N;
	unsigned int        _size;

	Span();

	class SomethingWrong : public std::exception {
	private:
		std::string _message;
	public:
		SomethingWrong(std::string msg) : _message(msg) {};
		const char* what() const throw() {
			return static_cast<const char *>(_message.c_str());
		}
		virtual ~SomethingWrong() throw() {};
	};

public:
	Span(const unsigned int N);
	Span(const Span &origin);
	Span &operator=(const Span &rhs);
	~Span();

	void addNumber(const int _nb);
	unsigned int shortestSpan() const ;
	unsigned int  longestSpan()  const;
	int &operator[](const unsigned int i);


//getters:
	const std::vector<int> &get_v() const;
	unsigned int get_N() const;
	unsigned int get_size() const;
};


#endif //EX01_SPAN_HPP
