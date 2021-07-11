//
// Created by Nelson Amerei on 7/9/21.
//

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
//	_brain->setFirstIdea("i love bones");
//	_type = "Dog";
//	_brain = new Brain();
	std::cout << RED"Dog appear"RESET << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {}

Dog::Dog(Dog &i)  : Animal(i) {
	if ( this != &i)
		this->_type = i._type;
}

Dog &Dog::operator=(Dog const& rhs) {
	this->_type = rhs._type;
	return *this;
}

Dog::~Dog() {
	delete(_brain);
	std::cout << RED"Dog disappear"RESET << std::endl;
}

void Dog::makeSound() const {
	std::cout << "-Гав-" << std::endl;
}

//void Dog::makeIdea(std::string const &firstIdea) const {
//	_brain->setFirstIdea(firstIdea);
//}

