#include <iostream>
# define BLU    "\x1B[34m"
# define MAG    "\x1B[35m"
# define CYN    "\x1B[36m"
# define UNDRLN "\x1b[4m"
# define RESET  "\x1b[0m"
int main() {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << BLU"string    adress is "UNDRLN << &string << RESET << std::endl;
	std::cout << CYN"stringPTR adress is "UNDRLN << stringPTR << RESET << std::endl;
	std::cout << MAG"stringREF adress is "UNDRLN << &stringREF << RESET << std::endl << std::endl;

	std::cout << BLU"string    value is \""UNDRLN << string << "\"" RESET << std::endl;
	std::cout << CYN"stringPTR value is \""UNDRLN << *stringPTR << "\"" RESET << std::endl;
	std::cout << MAG"stringREF value is \""UNDRLN << stringREF << "\"" RESET << std::endl;

	return 0;
}
