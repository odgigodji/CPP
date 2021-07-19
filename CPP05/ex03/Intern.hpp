//
// Created by Nelson Amerei on 19.07.21.
//

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP
#include <iostream>
#include "AForm.hpp"

class Intern {
public:
	Intern();
	Intern(Intern const &i);
	Intern &operator=(Intern const &rhs);
	~Intern();

//	AMateria *clone() const;
	AForm *makeForm(std::string const form, std::string const target);
};


#endif //EX03_INTERN_HPP
