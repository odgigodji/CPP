#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	std::cout << std::endl;

	Bureaucrat bob("Bob", 146);
	Bureaucrat jim("Jim", 135);
	Bureaucrat jack("Jack", 42);
	Bureaucrat zack("Zack", 5);
//
	std::cout << std::endl;

	//check execute
	AForm *shruberry_0 = new ShrubberyCreationForm("shrubberry_0"); //145, 137
	bob.executeForm(*shruberry_0);
	jim.executeForm(*shruberry_0);
	std::cout << std::endl;

	AForm *robotomy_0 = new RobotomyRequestForm("robotomy_0"); //72, 45
	jim.executeForm(*robotomy_0);
	jack.executeForm(*robotomy_0);
	std::cout << std::endl;

	AForm *pres_0 = new PresidentialPardonForm("pres_0"); //25, 5
	jack.executeForm(*pres_0);
	zack.executeForm(*pres_0);
	std::cout << std::endl;

	delete shruberry_0;
	delete robotomy_0;
	delete pres_0;

	return 0;
}
