#include <iostream>
#include "Span.hpp"
#include <ctime>

int main()
{
	//--------intra----
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	//my tesst
	Span sp1 = Span(10000);
	try {
		std::cout << "shortest: " << sp1.shortestSpan() << std::endl;

	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::srand(std::time(NULL));
	for (int i = 0; i < 10001; ++i) {
		try {
			sp1.addNumber(std::rand());
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "shortest " << sp1.shortestSpan() << std::endl;
	std::cout << "longest " << sp1.longestSpan() << std::endl;
}
