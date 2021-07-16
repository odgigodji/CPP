//
// Created by Nelson Amerei on 7/13/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name) : _name(name) {}

void Bureaucrat::GradeTooLowException(const unsigned short int grade) {

}

void Bureaucrat::GradeTooHighException(const unsigned short int grade) {

}

const std::string &Bureaucrat::get_name() const { return _name; }

unsigned short Bureaucrat::get_grade() const { return _grade; }
