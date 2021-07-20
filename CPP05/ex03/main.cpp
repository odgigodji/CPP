#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	Intern someRandomIntern;

	AForm *rrf;
	//shrubbery request/robotomy request/presidential request
	rrf = someRandomIntern.makeForm("presidential request", "Bender");

	Bureaucrat john("john", 20);
	john.executeForm(*rrf);

	return 0;
}
