//
// Created by Nelson Amerei on 7/9/21.
//

#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << RED"Dog appear"RESET << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {}

Dog::Dog(Dog &i) {
	if ( this != &i)
		this->_type = i._type;
}

Dog &Dog::operator=(Dog &rhs) {
	this->_type = rhs._type;
	return *this;
}

Dog::~Dog() {
	std::cout << RED"Dog disappear"RESET << std::endl;
}

void Dog::makeSound() const {
	std::cout << "-Гав-" << std::endl;
}
