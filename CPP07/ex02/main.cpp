#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> z(50);
	Array<std::string> str(42);
    for (int i = 0; i < 5; i++) {
		z[i] = 420;
	    std::cout << z[i] << std::endl;
	    str[i] = "star wars";
	    std::cout << str[i] << std::endl;
    }
	Array<std::string> copy = str;
	std::cout << "copy:" << copy[2] << std::endl;
	try {
		std::cout << z[51] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

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