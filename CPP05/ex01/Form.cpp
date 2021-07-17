//
// Created by Nelson Amerei on 17.07.21.
//

#include "Form.hpp"

Form::Form(const std::string &name, const unsigned short int signGradeNeed,
const unsigned short int execGradeNeed) {
	try {
		if (signGradeNeed < 1 || execGradeNeed < 1) {
			throw Bureaucrat::GradeTooHighException();
		}
		if (signGradeNeed > 150 || execGradeNeed > 150) {
			throw Bureaucrat::GradeTooLowException();
		} else {
			_name = name;
			_signGradeNeed = signGradeNeed;
			_execGradeNeed = execGradeNeed;
			std::cout << "Form <" << name << "> was created";
			std::cout << " with signGradeNeed <" << signGradeNeed << "> and ";
			std::cout << "with execGradeNeed <" << execGradeNeed << ">" << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Constructor: " << e.what() << std::endl;
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
