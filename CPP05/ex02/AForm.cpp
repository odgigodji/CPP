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
//			std::cout << "AForm <" << name << "> was created";
//			std::cout << " with grade to sign <" << signGradeNeed << "> and ";
//			std::cout << "with grade to execute <" << execGradeNeed << ">" << std::endl;
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

std::ostream &operator<<(std::ostream &o, const AForm &f) {
	o << "ShrubberyCreationForm <" << f.get_name() << "> grade to sign <";
	o << f.get_signGradeNeed() << "> grade to execute <";
	o << f.get_execGradeNeed() << ">" << std::endl;
	return o;
}