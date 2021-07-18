#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	ShrubberyCreationForm f("f1", 145, 137); //145 , 137
	f.doAction();
	std::cout << std::endl;

	RobotomyRequestForm r("r1", 72, 45); //72, 45
	r.doAction();
	return 0;
}
