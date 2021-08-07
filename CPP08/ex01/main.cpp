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
//	std::srand(std::time(NULL));
//	for (int i = 0; i < 10001; ++i) {
//		try {
//			sp1.addNumber(std::rand());
//		}
//		catch (std::exception &e) {
//			std::cout << e.what() << std::endl;
//		}
//	}
//	std::cout << "shortest " << sp1.shortestSpan() << std::endl;
//	std::cout << "longest " << sp1.longestSpan() << std::endl;
	std::cout << "test shit========\n";
	std::vector<int> v;
	v.reserve(50);
	v.push_back(5);
	v.push_back(7);

	std::vector<int>::iterator it = v.begin();
	for (; it != v.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << "last iter " <<  *it << std::endl;
	std::vector<int> g;
	v.push_back(51);
	v.push_back(71);
	v.push_back(53);
	v.push_back(72);
	std::vector<int>::iterator gt = g.begin();
	for (; gt != g.end(); it++, gt++) {
		*it = *gt;
	}
	std::cout << "final res" << std::endl;
	std::vector<int>::iterator itp = v.begin();
	for (; itp != v.end(); itp++) {
		std::cout << *itp << std::endl;
	}
}
