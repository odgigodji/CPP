#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
//	ShrubberyCreationForm f("home"); //145 , 137
//	f.doAction();
//	std::cout << std::endl;

//	RobotomyRequestForm r("lala"); //72, 45
//	r.doAction();
//	std::cout << std::endl;


	Bureaucrat bob("bob", 142);
	Bureaucrat jim("jim", 135);
//
	std::cout << std::endl;

	//check execute
	AForm *form = new ShrubberyCreationForm("formaa");
//	form->doAction();
	bob.executeForm(*form);
	jim.executeForm(*form);

	return 0;
}
