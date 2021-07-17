//
// Created by Nelson Amerei on 7/13/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, const unsigned short int grade)
        : _name(name), _grade(grade) {

}

//void Bureaucrat::GradeTooLowException(const unsigned short int grade) const {
//
//}
//
//void Bureaucrat::GradeTooHighException(const unsigned short int grade) const {
//
//}

const std::string &Bureaucrat::get_name() const { return _name; }

unsigned short Bureaucrat::get_grade() const { return _grade; }

Bureaucrat::Bureaucrat(Bureaucrat &i) {
	_grade = i._grade;
	_name = i._name;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
	_grade = rhs._grade;
	_name = rhs._name;
	return *this;
}

void Bureaucrat::upGrade() {
	try {
		if (_grade - 1 < 1) {
			throw GradeTooHighException();
		} else { _grade--; }
	}
	catch (std::exception& e) {
		std::cout << "upGrade:" << e.what() << std::endl;
	}
}

void Bureaucrat::downGrade() {
	try {
		if (_grade + 1 > 150) {
			throw GradeTooLowException();
		} else { _grade++; }
	}
	catch (std::exception& e) {
		std::cout << "downGrade:" << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bob) {
    o << "<" << bob.get_name() << "> bureacrat grade <" << bob.get_grade() << ">";
    return o;
}
