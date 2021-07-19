//
// Created by Nelson Amerei on 17.07.21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) {
	set_target(target);
	set_signGradeNeed(25);
	set_execGradeNeed(5);

	std::cout << MAG"RobotomyRequestForm with target <" << get_target() << "> was created.";
	std::cout << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &i) {
	set_name(i.get_name());
	set_signGradeNeed(i.get_signGradeNeed());
	set_execGradeNeed(i.get_execGradeNeed());
	set_signed(i.is_signed());
	set_target(i.get_target());
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	set_name(rhs.get_name());
	set_signGradeNeed(rhs.get_signGradeNeed());
	set_execGradeNeed(rhs.get_execGradeNeed());
	set_signed(rhs.is_signed());
	set_target(rhs.get_target());
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::doAction() const {
	std::cout << "<" << get_target() << "> has been pardoned by Zafod Beeblebrox.";
	std::cout << std::endl;
}
