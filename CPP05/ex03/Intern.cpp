//
// Created by Nelson Amerei on 19.07.21.
//

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &i) {}

Intern &Intern::operator=(Intern const &rhs) {
	return *this;
}

Intern::~Intern() {}

int Intern::formIs(std::string form) {
	if (form == "shrubbery request")
		return 1;
	if (form == "robotomy request")
		return 2;
	if (form == "presidential request")
		return 3;
	return 0;
}


AForm *Intern::makeForm(std::string const form, std::string const target) {
	try {
		AForm *res;
		switch (formIs(form)) {
			case 1:
				return (res = new ShrubberyCreationForm(target));
			case 2:
				return (res = new RobotomyRequestForm(target));
			case 3:
				return (res = new PresidentialPardonForm(target));
			default:
				throw IncorrectForm();
		}
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return NULL;
}

