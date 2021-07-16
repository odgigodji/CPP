//
// Created by Nelson Amerei on 7/13/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, const unsigned short int grade)
        : _name(name), _grade(grade) {

}

void Bureaucrat::GradeTooLowException(const unsigned short int grade) const {

}

void Bureaucrat::GradeTooHighException(const unsigned short int grade) const {

}

const std::string &Bureaucrat::get_name() const { return _name; }

unsigned short Bureaucrat::get_grade() const { return _grade; }

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bob) {
    o << "<" <<bob.get_name() << "> bureacrat grade <" << bob.get_grade() << ">";
    return o;
}
