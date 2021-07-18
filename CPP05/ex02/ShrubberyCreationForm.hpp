//
// Created by Nelson Amerei on 17.07.21.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm { //sign 145 //ex 137
public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &i);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
	~ShrubberyCreationForm();

	virtual void doAction() const;
	virtual void execute(Bureaucrat const & executor) const;
};

#endif //EX02_SHRUBBERYCREATIONFORM_HPP