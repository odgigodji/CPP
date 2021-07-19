//
// Created by Nelson Amerei on 17.07.21.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm { //72, 45
public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(RobotomyRequestForm const &i);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
	~RobotomyRequestForm();

	virtual void doAction() const;
//	virtual bool execute(Bureaucrat const & executor) ;
};


#endif //EX02_ROBOTOMYREQUESTFORM_HPP
