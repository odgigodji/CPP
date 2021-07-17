//
// Created by Nelson Amerei on 17.07.21.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Form {
private:
	std::string         _name;
	bool                _signed; //in begini is not
	unsigned short int  _signGradeNeed;
	unsigned short int  _execGradeNeed;
public:
	Form(const std::string &name, const unsigned short int signGradeNeed,
	     const unsigned short int execGradeNeed);
	Form(Form const &i);
	Form &operator=(Form const &rhs);
	~Form();

	const std::string &get_name() const;
	bool is_signed() const;
	unsigned short get_signGradeNeed() const;
	unsigned short get_execGradeNeed() const;

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Grade too high.");
		}
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Grade too low.");
		}
	};
};

std::ostream &operator<<(std::ostream &o, const Form &f);

#endif //EX01_FORM_HPP
