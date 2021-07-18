//
// Created by Nelson Amerei on 17.07.21.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm { //72, 45
public:
	RobotomyRequestForm(const std::string &name,
	                    const unsigned short int signGradeNeed,
	                    const unsigned short int execGradeNeed);
	RobotomyRequestForm(RobotomyRequestForm const &i);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
	~RobotomyRequestForm();

	virtual void doAction() const;
};


#endif //EX02_ROBOTOMYREQUESTFORM_HPP
