//
// Created by Nelson Amerei on 17.07.21.
//

#include "Form.hpp"

Form::Form(const std::string &name, const unsigned short int signGradeNeed,
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
			std::cout << "Form <" << name << "> was created";
			std::cout << " with grade to sign <" << signGradeNeed << "> and ";
			std::cout << "with grade to execute <" << execGradeNeed << ">" << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Form constructor: " << e.what() << std::endl;
	}
}

Form::Form(Form const &i) {
	_name = i._name;
	_signGradeNeed = i._signGradeNeed;
	_execGradeNeed = i._execGradeNeed;
}

Form &Form::operator=(Form const &rhs) {
	_name = rhs._name;
	_signGradeNeed = rhs._signGradeNeed;
	_execGradeNeed = rhs._execGradeNeed;
	return *this;
}

Form::~Form() {}

//getters:
const std::string &Form::get_name() const {
	return _name;
}
bool Form::is_signed() const {
	return _signed;
}
unsigned short Form::get_signGradeNeed() const {
	return _signGradeNeed;
}
unsigned short Form::get_execGradeNeed() const {
	return _execGradeNeed;
}

std::ostream &operator<<(std::ostream &o, const Form &f) {
	o << "Form <" << f.get_name() << "> grade to sign <";
	o << f.get_signGradeNeed() << "> grade to execute <";
	o << f.get_execGradeNeed() << ">" << std::endl;
	return o;
}