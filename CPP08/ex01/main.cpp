#include <iostream>
#include "Span.hpp"
#include <ctime>

//int main ()
//{
//	std::vector<int> myvector (3,100); //3 - 100
//	std::vector<int>::iterator it;
//
//	it = myvector.end();
//	it = myvector.insert(it, 150);
//
////	int myarray [] = { 501,502,503 };
////	myvector.insert (myvector.end(), myarray, myarray+3);
//
//	std::vector<int> a (3, 412);
////	myvector.insert(myvector.end(), a.begin(), a.end());
////	std::vector<int> myarray;
////	myarray.push_back(501);
////	myarray.push_back(501);
////	myarray.push_back(502);
//
////	it = myvector.begin();
////	it = myvector.insert ( it , 200 );
////
////	myvector.insert (it,2,300);
////
////	// "it" no longer valid, get a new one:
////	it = myvector.begin();
////
////	std::vector<int> anothervector (2,400);
////	myvector.insert (it+2,anothervector.begin(),anothervector.end());
////
////	int myarray [] = { 501,502,503 };
////	myvector.insert (myvector.begin(), myarray, myarray+3);
//
//	std::cout << "myvector contains:";
//	for (it=myvector.begin(); it<myvector.end(); it++)
//		std::cout << ' ' << *it;
//	std::cout << '\n';
//
//	return 0;
//}

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
	Span sp1 = Span(6);
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

	sp1.addNumbers(v);
	std::cout << "get size is " << sp1.get_size() << std::endl;
//	std::cout << sp1[0] << " " << sp1[1] << " " << sp1[2] << std::endl;
//	std::vector<int>::iterator it = v.begin();
//	for (; it != v.end(); it++) {
//		std::cout << *it << std::endl;
//	}
//	std::cout << "last iter " <<  *it << std::endl;
	std::vector<int> g;
	g.push_back(51);
	g.push_back(71);
	g.push_back(53);
	g.push_back(72);

	try {
		sp1.addNumbers(g);
		std::cout << "get size is " << sp1.get_size() << std::endl;
//		sp1[5];
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << sp1 << std::endl;
//	std::cout << sp1[3] << " " << sp1[4] << " " << sp1[6] << std::endl;
//	std::vector<int>::iterator gt = g.begin();
//	for (; gt != g.end(); it++, gt++) {
//		*it = *gt;
//		std::cout << *it << std::endl;
//	}
//	v.end() = v.end() + g.size();
//	std::cout << "final res:" << std::endl;
////	std::cout << "v3 " << v[3] << std::endl;
//	std::vector<int>::iterator itp = v.begin();
//	std::cout << "v.end " << *v.end() << std::endl;
//	for (; itp != v.end(); itp++) {
//		std::cout << *itp << std::endl;
//	}
}
