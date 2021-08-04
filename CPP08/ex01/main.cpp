#include <iostream>
#include "Span.hpp"

//
int main() {
	Span sp = Span(5);
//	sp.addNumber(6);
//	std::cout << sp[0] << std::endl;
//	std::cout << sp[1] << std::endl;
//	try {
//		sp[6];
//	}
//	catch (const char *e) {
//		std::cout << e << std::endl;
//	}
	sp.addNumber(0);

	sp.addNumber(45);
	sp.addNumber(5);

	sp.addNumber(70);
	sp.addNumber(5);
	sp.addNumber(110);

	sp.shortestSpan();
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
}