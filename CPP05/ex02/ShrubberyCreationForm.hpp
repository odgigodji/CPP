//
// Created by Nelson Amerei on 17.07.21.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form { //sign 145 //ex 137
public:
	ShrubberyCreationForm(const std::string &name,
	                      const unsigned short int signGradeNeed,
	                      const unsigned short int execGradeNeed);
	ShrubberyCreationForm(ShrubberyCreationForm const &i);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
//	~ShrubberyCreationForm();

//	virtual void doAction();
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