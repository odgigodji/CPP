#include <vector>
#include <list>
//#include <iterator>
#include "easyfind.hpp"

int main () {
	std::list<int>	a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);

	try {
		std::_List_iterator<int> it_list = easyfind(a, 3);
		std::cout << "search res in list is " << *it_list << std::endl;
	}
	catch (const char* &e)
	{
		std::cerr << e << std::endl;
	}

	try {
		std::_List_iterator<int> it = easyfind(a, 5);
		std::cout << "search res is " << *it << std::endl;
	}
	catch (const char* &e)
	{
		std::cerr << e << std::endl;
	}


	return 0;
}