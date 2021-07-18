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
	ShrubberyCreationForm(const std::string &name,
	                      const unsigned short int signGradeNeed,
	                      const unsigned short int execGradeNeed);
	ShrubberyCreationForm(ShrubberyCreationForm const &i);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
	~ShrubberyCreationForm();

	virtual void doAction() const;
};



#endif //EX02_SHRUBBERYCREATIONFORM_HPP
//
//		   *
//		  /|\
//       /*|O\
//      /*/|\*\
//     /X/O|*\X\
//    /*/X/|\X\*\
//   /O/*/X|*\O\X\
//  /*/O/X/|\X\O\*\
// /X/O/*/X|O\X\*\O\
///O/X/*/O/|\X\*\O\X\
//        |X|
//        |X|