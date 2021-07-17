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
	Form(Form &i);
	Form &operator=(Form const &rhs);
	~Form();
};


#endif //EX01_FORM_HPP
