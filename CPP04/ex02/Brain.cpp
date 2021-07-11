//
// Created by Nelson Amerei on 7/9/21.
//

#include "Brain.hpp"
#include "AAnimal.hpp"

Brain::Brain() {
	std::cout << BLU"Brain was created"RESET << std::endl;
}

Brain::Brain(Brain const &rhs) {
	for(int i = 0; rhs._ideas[i].length() != 0; ++i) {
		_ideas[i] = rhs._ideas[i];
	}
}

Brain::~Brain() {
	std::cout << BLU"Brain was deleted"RESET << std::endl;
}

Brain &Brain::operator=(Brain const &rhs) {
	for(int i = 0; rhs._ideas[i].length() != 0; ++i) {
		_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

void Brain::setFirstIdea(std::string const &firstIdea) {
	_ideas[0] = firstIdea;
}

std::string Brain::getFirstIdea() {
	return _ideas[0];
}
