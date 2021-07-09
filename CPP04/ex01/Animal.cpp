//
// Created by Nelson Amerei on 7/9/21.
//

#include "Animal.hpp"

Animal::Animal() {
	std::cout << MAG"Animal appear"RESET << std::endl;
}

Animal::Animal(std::string type) : _type(type) {}

Animal::Animal(Animal &i) {
	if ( this != &i)
		this->_type = i._type;
}

Animal &Animal::operator=(Animal &animal) {
	this->_type = animal._type;
	return *this;
}

const std::string &Animal::getType() const {
	return _type;
}

Animal::~Animal() {
	std::cout << MAG"Animal disappear"RESET << std::endl;
}

void Animal::makeSound() const {}
