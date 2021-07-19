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


	Bureaucrat bob("bob", 146);
	Bureaucrat jim("jim", 135);
//
	std::cout << std::endl;

	//check execute
	AForm *shruberry_form_0 = new ShrubberyCreationForm("shruberry_form_0");
//	form->doAction();
	bob.executeForm(*shruberry_form_0);
	jim.executeForm(*shruberry_form_0);
	std::cout << std::endl;

	AForm *robotomy_0 = new RobotomyRequestForm("robotomy_0");
	bob.executeForm(*robotomy_0);
	return 0;
}
