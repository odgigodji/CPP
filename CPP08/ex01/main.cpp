#include <iostream>
#include "Span.hpp"

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

	//=====my tesst======
	std::cout << "---------my tests---------\n";
	Span sp1 = Span(8);
	try {
		std::cout << sp1.shortestSpan() << std::endl;

	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::vector<int> v(3, 100);
	sp1.addNumbers(v);
//	std::cout << "get size is " << sp1.get_size() << std::endl;
	std::vector<int> g(5, 200);

	try {
		sp1.addNumbers(g);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << sp1 << std::endl;
	std::cout << "shortest: " << sp1.shortestSpan() << std::endl;
	std::cout << "longest: " << sp1.longestSpan() << std::endl;
}
