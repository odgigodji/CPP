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
	Bureaucrat bob("bob", 143);
	Bureaucrat jim("jim", 135);
//	std::cout << bob.get_grade() << bob.get_name() << std::endl;
//	f.execute(bob);
//	f.execute(jim);
	std::cout << std::endl;
	AForm *form = new ShrubberyCreationForm("formaa");
//	form->doAction();
	bob.executeForm(*form);
	jim.executeForm(*form);
//	try
//	{
//		bob->signForm(*form);
//	}
//	catch (std::exception & e)
//	{
//		std::cerr << e.what() << std::endl;
//	}
	return 0;
}
