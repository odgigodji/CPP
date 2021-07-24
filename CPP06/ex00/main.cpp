#include <iostream>
#include "Convert.hpp"

int main(int ac, char **av) {
//	if (ac != 2) {return 1;}

	av[1] = static_cast<char *>("+inf");
	Convert a(av[1]);
	a.printChar();
	a.printInt(); //-42 , 0, 1, ad, a, 123, 200 ,
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