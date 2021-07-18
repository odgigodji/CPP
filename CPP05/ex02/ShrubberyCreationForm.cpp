//
// Created by Nelson Amerei on 17.07.21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(
		const std::string &name,
		const unsigned short int signGradeNeed,
        const unsigned short int execGradeNeed)
		: Form(name, signGradeNeed, execGradeNeed) {
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

//void ShrubberyCreationForm::doAction() {
//	;
//}

//ShrubberyCreationForm::~ShrubberyCreationForm() {
//
//}

//ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &i) {
//
//}


//ShrubberyCreationForm::~ShrubberyCreationForm() {
//
//}
//
//void ShrubberyCreationForm::doAction() {
//
//}
//
//ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
//	return <#initializer#>;
//}

