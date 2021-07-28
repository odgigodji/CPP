#include <iostream>
#include <cstdlib>
#include "Array.hpp"
#include <iostream>

#define MAX_VAL 750
int main(int, char**)
{
//	Array<int> a(15);
////	delete[] a;
//	srand(time(NULL));
//	Array<int> b(1);
//	b[0] = 1234;
//	for (int i =0; i < 15; ++i) {
//		const int value = rand();
//		a[i] = value;
//		std::cout << a[i] << std::endl;
//	}
//	std::cout << "a[14] is " << a[14] << std::endl;
//
//	Array<int> c;
//	Array<std::string> s(1);
//	s[0] = "hello";
//	std::cout << s[0] << std::endl;
//
//	std::cout << "b before =" << b[0] << std::endl;
//	b = a;
//	std::cout << "b after =" << b[0] << "b size " << b.size() << std::endl << std::endl;
//
//	Array<int> cpa(b);
//	std::cout << "cpa is " << cpa[0] << "cpa size " << cpa.size() << std::endl;
//	//-----------------------------------intra ----------------------
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}