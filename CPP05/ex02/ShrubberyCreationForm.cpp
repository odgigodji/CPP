//
// Created by Nelson Amerei on 17.07.21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(
		const std::string &name,
		const unsigned short int signGradeNeed,
        const unsigned short int execGradeNeed)
		: AForm(name, signGradeNeed, execGradeNeed) {
	try {
		if (signGradeNeed != 145) {
			throw GradeNotValid();
		}
		if (execGradeNeed != 137) {
			throw GradeNotValid();
		} else {
			std::cout << MAG"ShrubberyCreationForm <" << name << "> was created";
			std::cout << " with grade to sign <" << signGradeNeed << "> and ";
			std::cout << "with grade to execute <" << execGradeNeed << ">"RESET << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << RED"ShrubberyCreationForm constructor: " << e.what();
		std::cout << RESET << std::endl;
	}
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &i) {
	_name = i._name;
	_signGradeNeed = i._signGradeNeed;
	_execGradeNeed = i._execGradeNeed;
	_signed = i._signed;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	_name = rhs._name;
	_signGradeNeed = rhs._signGradeNeed;
	_execGradeNeed = rhs._execGradeNeed;
	_signed = rhs._signed;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::doAction() const {
	std::cout << "doAction\n";
}