#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include "Convert.hpp"

float getFloat(std::string av) {
	std::string num = "0.62f";

//	float r = nanf;
	float temp = static_cast<float>(atof(num.c_str()));
	std::cout << "getFloat: float res is " << temp << std::endl;
	return temp;
}

double getDouble(std::string av) {
	std::string num1 = "0.55d";

	double tmp = atof(num1.c_str());
	std::cout << "getInt: double res is " << tmp << std::endl;
	return tmp;
}

int getInt(std::string av) {
	int i;
	std::string num = "-42";
	//approach one
//	std::istringstream(av) >> i;
//	i = atoi(av.c_str());
	i = atoi(num.c_str());
	std::cout << "getInt: int res is " << i << std::endl;

	return i;
}

int getType(std::string av) {
//	getInt(av);
	getFloat(av);
//	getDouble(av);
	return 0;
}

int main(int ac, char **av) {
//	if (ac != 2) {return 1;}
//	const char a[] = "hello";
//	std::string = a;
//	std::cout << a << std::endl;
//	std::cout << "input: " << av[1] << std::endl;
//	getType(static_cast<std::string>(av[1]));

	Convert a("1d8");
//	std::cout << "int: " << a.convertToInt() << std::endl;
	a.printInt();

//	a.set_string("-42"); //-42 , 0, 1, ad, a, 123, 200 ,
	a.printChar();
	return 0;
}

//./convert 0
//char: Non displayable
//int: 0
//float: 0.0f
//double: 0.0

//./convert nan
//char: impossible
//int: impossible
//float: nanf
//double: nan

//./convert 42.0f
//char: '*'
//int: 42
//float: 42.0f
//double: 42.0