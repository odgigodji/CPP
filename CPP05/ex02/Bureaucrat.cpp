//
// Created by Nelson Amerei on 7/13/21.
//

#include "Bureaucrat.hpp"
#include "AForm.hpp"

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
		std::cout << RED"Bureaucrat constructor: " << e.what() << "."RESET << std::endl;
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

Bureaucrat::~Bureaucrat() {
//	std::cout << "-Bureaucrat\n";
}

void Bureaucrat::set_name(const std::string &_name) {
	Bureaucrat::_name = _name;
}

void Bureaucrat::set_grade(unsigned short _grade) {
	Bureaucrat::_grade = _grade;
}

void Bureaucrat::executeForm(AForm  &form) {
	try {
		if (!form.execute(*this)) {
			throw GradeTooLowException();
		}
		else {
			std::cout << BLU"executeForm: <" << this->get_name() << "> executes <";
			std::cout << form.get_target() << ">!"RESET << std::endl;
			form.doAction();
		}
	}
	catch (std::exception &e) {
		std::cout << RED"ExecuteForm: can't execute, <";
		std::cout << get_name() << ">'s " << e.what();
		std::cout << RESET << std::endl;
	}

}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bob) {
    o << "<" << bob.get_name() << "> bureacrat grade <" << bob.get_grade() << ">";
    return o;
}
