//
// Created by Nelson Amerei on 17.07.21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(
		const std::string &name,
		const unsigned short int signGradeNeed,
        const unsigned short int execGradeNeed)
		: Form(name, signGradeNeed, execGradeNeed){
	try {
		if (signGradeNeed != 145) {
			throw GradeTooHighException();
		}
		if (execGradeNeed != 137) {
			throw GradeTooLowException();
		} else {
//			Form(name, signGradeNeed, execGradeNeed);
			_name = name;
			_signGradeNeed = signGradeNeed;
			_execGradeNeed = execGradeNeed;
			_signed = false;
			std::cout << "Form <" << name << "> was created";
			std::cout << " with grade to sign <" << signGradeNeed << "> and ";
			std::cout << "with grade to execute <" << execGradeNeed << ">" << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Form constructor: " << e.what() << std::endl;
	}
}

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
