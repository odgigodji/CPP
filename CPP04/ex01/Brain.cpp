//
// Created by Nelson Amerei on 7/9/21.
//

#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain() {
	std::cout << BLU"Brain appear"RESET << std::endl;
}

//Brain::Brain(Brain &i) {
//	if ( this != &i)
//		this->_type = i._type;
//}

//Brain &Brain::operator=(Brain &animal) {
//	return <#initializer#>;
//}

Brain::~Brain() {
	std::cout << BLU"Brain disappear"RESET << std::endl;
}
