#include <iostream>
#include <cstdlib>
#include "Array.hpp"
#include <iostream>

#define MAX_VAL 750
int main(int, char**)
{
//	int *z;
//	z = new int[0];
//	std::cout << z << std::endl;
//	delete[] z;
//	return 0;

//	int * aa = new int();
//	std::cout << *aa << std::endl;

	Array<int> a(20);
////	Array<int> b(10);
////
////	b = a;
//
////	Array<int> c = a;
//	Array<int> b(a);
//	Array<int> x;
//	Array<int> z = a;
//	x = a;

//	delete[] a;
//	Array<int> b(1);
//	b[0] = 1234;
//	for (int i =0; i < 1; ++i) {
//		a[i] = 42069;
//		std::cout << a[i] << std::endl;
//	}
//	std::cout << "a[0] is " << a[0] << std::endl;

//	----thats ok
	Array<int> c;
	c = a;
	std::cout << "c.size is " << c.size() << "c.arr is " << c.size()<< std::endl;
//	------thats not
	Array<int> b = a;
	std::cout << "b.size is " << b.size() << "b.arr[0] is ";
	std::cout << b[0] << std::endl;

//	Array<int> c = b;
	Array<int> d;
	d = a;
	std::cout << "c.size is " << c.size() << "c.arr[0] is ";
	std::cout << c[0] << std::endl;

	c = a;
	b = a;
	Array<int> e;
	d = a;
	e = d;

	Array<std::string> s(1);
	s[0] = "hello";
	std::cout << s[0] << std::endl;

	std::cout << "b before =" << b[0] << std::endl;
	b = a;
	std::cout << "b after =" << b[0] << "b size " << b.size() << std::endl << std::endl;

	Array<int> cpa(b);
	std::cout << "cpa is " << cpa[0] << "cpa size " << cpa.size() << std::endl;
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