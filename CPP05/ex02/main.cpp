#include <iostream>
#include "Form.hpp"

int main() {
	Form f1("f1", 42, 51);
	std::cout << std::endl;

	Form f2("f1", 0, 51);
	std::cout << std::endl;

	Form f3("f1", 151, 51);
	std::cout << std::endl;

	Form f4("f1", 42, 151);
	std::cout << std::endl;

	Form f5("f1", 42, 0);
	std::cout << std::endl;
	return 0;
}
