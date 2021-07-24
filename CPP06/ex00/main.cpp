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

int main(int ac, char **av) {
//	if (ac != 2) {return 1;}

	av[1] = static_cast<char *>("0.0000054785");
	Convert a(av[1]);
//	std::cout << "int: " << a.convertToInt() << std::endl;
	a.printChar();

//	a.set_string("-42"); //-42 , 0, 1, ad, a, 123, 200 ,
	a.printInt();

//	a.set_string("-42.00051");
	a.printFloat();

	a.printDouble();
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