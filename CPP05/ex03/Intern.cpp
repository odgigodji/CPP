//
// Created by Nelson Amerei on 19.07.21.
//

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &i) {}

Intern &Intern::operator=(Intern const &rhs) {
	return *this;
}

Intern::~Intern() {}

AForm *Intern::makeForm(std::string const form, std::string const target) {
	std::cout << form << std::endl;
	std::cout << target << std::endl;
	AForm *res = new ShrubberyCreationForm(target);
	return res;
}

//AMateria *Cure::clone() const {

