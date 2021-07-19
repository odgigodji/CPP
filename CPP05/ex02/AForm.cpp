//
// Created by Nelson Amerei on 17.07.21.
//

#include "AForm.hpp"

AForm::AForm(const std::string &name, const unsigned short int signGradeNeed,
const unsigned short int execGradeNeed) {
	try {
		if (signGradeNeed < 1 || execGradeNeed < 1) {
			throw GradeTooHighException();
		}
		if (signGradeNeed > 150 || execGradeNeed > 150) {
			throw GradeTooLowException();
		} else {
			_name = name;
			_signGradeNeed = signGradeNeed;
			_execGradeNeed = execGradeNeed;
			_signed = false;
		}
	}
	catch (std::exception &e) {
		std::cout << YEL"AForm constructor: " << e.what();
		std::cout << RESET << std::endl;
	}
}

AForm::AForm(AForm const &i) {
	_name = i._name;
	_signGradeNeed = i._signGradeNeed;
	_execGradeNeed = i._execGradeNeed;
	_signed = i._signed;
}

AForm &AForm::operator=(AForm const &rhs) {
	_name = rhs._name;
	_signGradeNeed = rhs._signGradeNeed;
	_execGradeNeed = rhs._execGradeNeed;
	_signed = rhs._signed;
	return *this;
}

AForm::~AForm() {}

//getters:
const std::string &AForm::get_name() const {
	return _name;
}
bool AForm::is_signed() const {
	return _signed;
}
unsigned short AForm::get_signGradeNeed() const {
	return _signGradeNeed;
}
unsigned short AForm::get_execGradeNeed() const {
	return _execGradeNeed;
}

AForm::AForm() {}

void AForm::set_name(const std::string &_name) {
	AForm::_name = _name;
}

void AForm::set_signed(bool _signed) {
	AForm::_signed = _signed;
}

void AForm::set_signGradeNeed(unsigned short _signGradeNeed) {
	AForm::_signGradeNeed = _signGradeNeed;
}

void AForm::set_execGradeNeed(unsigned short _execGradeNeed) {
	AForm::_execGradeNeed = _execGradeNeed;
}

const std::string &AForm::get_target() const {
	return _target;
}

void AForm::set_target(const std::string &_target) {
	AForm::_target = _target;
}

bool AForm::execute(Bureaucrat const &executor) {
	try {
		if (executor.get_grade() > get_signGradeNeed() && !is_signed()) { //cant sign
			throw GradeTooLowException();
		}
		else {
			if (!is_signed()) {
				std::cout << GRN"<" << executor.get_name() << "> successfully signed <";
				std::cout << get_target() << ">"RESET << std::endl;
			}
			set_signed(true);
		}
	}
	catch (std::exception &e) {
//		std::cout << RED"Error: Form <" << get_target() << "> can't sign, <";
//		std::cout << executor.get_name() << ">'s " << e.what();
//		std::cout << RESET << std::endl;
	}

	try {
		//check grade and is signed
		if (executor.get_grade() > get_execGradeNeed() || !is_signed()) {
			throw GradeTooLowException();
		}
		else {
//			std::cout << GRN"<" << executor.get_name() << "> execution permit <";
//			std::cout << get_target() << ">"RESET << std::endl;
		}
	}
	catch (std::exception &e) {
//		std::cout << RED"Executor Shrubbery: can't execute, <";
//		std::cout << executor.get_name() << ">'s " << e.what();
//		std::cout << RESET << std::endl;
	}
	return (is_signed());
}

std::ostream &operator<<(std::ostream &o, const AForm &f) {
	o << "ShrubberyCreationForm <" << f.get_name() << "> grade to sign <";
	o << f.get_signGradeNeed() << "> grade to execute <";
	o << f.get_execGradeNeed() << ">" << std::endl;
	return o;
}