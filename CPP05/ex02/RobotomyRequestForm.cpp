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
			std::cout << MAG"RobotomyRequestForm <" << get_name() << "> was created";
			std::cout << " with grade to sign <" << get_signGradeNeed() << "> and ";
			std::cout << "with grade to execute <" << get_execGradeNeed() << ">"RESET << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << RED"RobotomyRequestForm constructor: " << e.what();
		std::cout << RESET << std::endl;
	}
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &i) {
	set_name(i.get_name());
	set_signGradeNeed(i.get_signGradeNeed());
	set_execGradeNeed(i.get_execGradeNeed());
	set_signed(i.is_signed());
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	set_name(rhs.get_name());
	set_signGradeNeed(rhs.get_signGradeNeed());
	set_execGradeNeed(rhs.get_execGradeNeed());
	set_signed(rhs.is_signed());
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
