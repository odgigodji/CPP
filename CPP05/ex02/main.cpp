#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	ShrubberyCreationForm f("home"); //145 , 137
	f.doAction();
	std::cout << std::endl;

	RobotomyRequestForm r("lala"); //72, 45
//	r.doAction();
	Bureaucrat bob("bob", 145);
	f.execute(bob);

	return 0;
}
