//
// Created by Nelson Amerei on 7/9/21.
//

#ifndef EX01_BRAIN_HPP
#define EX01_BRAIN_HPP
#include <iostream>

class Brain {
protected:
	std::string _ideas[100];
public:
	Brain();
	Brain(Brain const &rhs);
	Brain & operator=(Brain const &rhs);
	~Brain();

	void setFirstIdea(std::string const &firstIdea);
	std::string getFirstIdea();
};

#endif //EX01_BRAIN_HPP
