//
// Created by Nelson Amerei on 7/13/21.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
private:
    std::string _name;
    unsigned short int _grade; //150 to 1

public:
    Bureaucrat(const std::string &name, const unsigned short int grade);
	Bureaucrat(Bureaucrat const &i);
	Bureaucrat &operator=(Bureaucrat const &rhs);

	void set_name(const std::string &_name);

	void set_grade(unsigned short _grade);

	~Bureaucrat();

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Grade too high");
			}
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Grade too low");
			}
	};

    const std::string &get_name() const;
	unsigned short get_grade() const;

	void executeForm(AForm & form);
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bob);

#endif //EX00_BUREAUCRAT_HPP
