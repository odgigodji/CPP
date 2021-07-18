//
// Created by Nelson Amerei on 17.07.21.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
# define RED    "\x1B[31m"
# define WTH    "\x1B[38m"
# define GRN    "\x1B[32m"
# define YEL    "\x1B[33m"
# define BLU    "\x1B[34m"
# define MAG    "\x1B[35m"
# define CYN    "\x1B[36m"
# define RESET  "\x1B[0m"

class Form {
protected:
	std::string         _name;
	bool                _signed; //in begini is not
	unsigned short int  _signGradeNeed;
	unsigned short int  _execGradeNeed;
public:
	Form();
	Form(const std::string &name, const unsigned short int signGradeNeed,
	     const unsigned short int execGradeNeed);
	Form(Form const &i);
	Form &operator=(Form const &rhs);
	virtual ~Form();

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
	class GradeNotValid : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Required grade not valid.");
		}
	};

//	virtual void doAction() const = 0;
};

std::ostream &operator<<(std::ostream &o, const Form &f);

#endif //EX01_FORM_HPP
