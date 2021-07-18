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

class AForm {
private:
	std::string         _name;
	bool                _signed; //in begini is not
	unsigned short int  _signGradeNeed;
	unsigned short int  _execGradeNeed;

	std::string         _target;
public:
	AForm();
	AForm(const std::string &name, const unsigned short int signGradeNeed,
	     const unsigned short int execGradeNeed);
	AForm(AForm const &i);
	AForm &operator=(AForm const &rhs);
	virtual ~AForm();

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

	void set_name(const std::string &_name);
	void set_signed(bool _signed);
	void set_signGradeNeed(unsigned short _signGradeNeed);
	void set_execGradeNeed(unsigned short _execGradeNeed);
	void set_target(const std::string &_target);

	const std::string &get_target() const;
	const std::string &get_name() const;
	bool is_signed() const;
	unsigned short get_signGradeNeed() const;
	unsigned short get_execGradeNeed() const;

	virtual void doAction() const = 0;
};

std::ostream &operator<<(std::ostream &o, const AForm &f);

#endif //EX01_FORM_HPP
