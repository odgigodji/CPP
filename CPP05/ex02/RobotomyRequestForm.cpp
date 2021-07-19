//
// Created by Nelson Amerei on 17.07.21.
//

#include "RobotomyRequestForm.hpp"
#include <unistd.h>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) {
	set_target(target);
	set_signGradeNeed(72);
	set_execGradeNeed(45);

	std::cout << MAG"RobotomyRequestForm with target <" << get_target() << "> was created.";
	std::cout << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &i) {
	set_name(i.get_name());
	set_signGradeNeed(i.get_signGradeNeed());
	set_execGradeNeed(i.get_execGradeNeed());
	set_signed(i.is_signed());
	set_target(i.get_target());
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	set_name(rhs.get_name());
	set_signGradeNeed(rhs.get_signGradeNeed());
	set_execGradeNeed(rhs.get_execGradeNeed());
	set_signed(rhs.is_signed());
	set_target(rhs.get_target());
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

	std::cout << "<" << get_target() << "> has been ";
	std::cout << "robotomized successfully 50% of the time." << std::endl;
}
