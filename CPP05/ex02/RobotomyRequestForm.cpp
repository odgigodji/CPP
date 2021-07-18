//
// Created by Nelson Amerei on 17.07.21.
//

#include "RobotomyRequestForm.hpp"
#include <unistd.h>

RobotomyRequestForm::RobotomyRequestForm(const std::string &name,
        const unsigned short int signGradeNeed,
        const unsigned short int execGradeNeed)
		: AForm(name, signGradeNeed, execGradeNeed) {
	try {
		if (signGradeNeed != 72) {
			throw GradeNotValid();
		}
		if (execGradeNeed != 45) {
			throw GradeNotValid();
		} else {
			std::cout << MAG"RobotomyRequestForm <" << name << "> was created";
			std::cout << " with grade to sign <" << signGradeNeed << "> and ";
			std::cout << "with grade to execute <" << execGradeNeed << ">"RESET << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << RED"RobotomyRequestForm constructor: " << e.what();
		std::cout << RESET << std::endl;
	}
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &i) {
//	_name = i._name;
//	_signGradeNeed = i._signGradeNeed;
//	_execGradeNeed = i._execGradeNeed;
//	_signed = i._signed;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
//	_name = rhs._name;
//	_signGradeNeed = rhs._signGradeNeed;
//	_execGradeNeed = rhs._execGradeNeed;
//	_signed = rhs._signed;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::doAction() const {
	std::cout << "\a zzz" << std::endl;
	sleep(1);
	std::cout << "\a thhhh" << std::endl;
	sleep(1);
	std::cout << "\a zzzz" << std::endl;
	sleep(1);

	std::cout << "<target> has been ";
	std::cout << "robotomized successfully 50% of the time." << std::endl;
}
