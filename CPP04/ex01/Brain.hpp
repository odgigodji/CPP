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
//	Brain(std::string type);
//	Brain(Brain & i);
//	Brain & operator=(Brain & animal);
	~Brain();
};


#endif //EX01_BRAIN_HPP
