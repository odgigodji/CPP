//
// Created by Nelson Amerei on 7/13/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, const unsigned short int grade) {
	try {
		if (grade < 1) {
			throw GradeTooHighException();
		}
		if (grade > 150) {
			throw GradeTooLowException();
		} else {
			_name = name;
			_grade = grade;
			std::cout << "Bureaucrat <" << name << "> was born";
			std::cout << " with grade <" << grade << ">" << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Bureaucrat constructor: " << e.what() << std::endl;
	}
}

const std::string &Bureaucrat::get_name() const { return _name; }

unsigned short Bureaucrat::get_grade() const { return _grade; }

Bureaucrat::Bureaucrat(Bureaucrat const &i) {
	_grade = i._grade;
	_name = i._name;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
	_grade = rhs._grade;
	_name = rhs._name;
	return *this;
}

void Bureaucrat::upGrade() {
	std::cout << "upGrade";
	try {
		if (_grade - 1 < 1) {
			throw GradeTooHighException();
		} else { _grade--; }
	}
	catch (std::exception& e) {
		std::cout << ": " << e.what();
	}
	std::cout << std::endl;
}

void Bureaucrat::downGrade() {
	std::cout << "downGrade";
	try {
		if (_grade + 1 > 150) {
			throw GradeTooLowException();
		} else { _grade++; }
	}
	catch (std::exception& e) {
		std::cout << ": " << e.what() << std::endl;
	}
	std::cout << std::endl;
}

Bureaucrat::~Bureaucrat() {}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bob) {
    o << "<" << bob.get_name() << "> bureacrat grade <" << bob.get_grade() << ">";
    return o;
}
