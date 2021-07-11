//
// Created by Nelson Amerei on 7/9/21.
//

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
	std::cout << RED"Dog appear"RESET << std::endl;
}

Dog::Dog(Dog &rhs)  : AAnimal(rhs) {
	_type = rhs._type;
	if (rhs._brain)
	{
		_brain = new Brain();
		_brain = rhs._brain;
	}
}

Dog &Dog::operator=(Dog const& rhs) {
	_type = rhs._type;
	if (rhs._brain)
	{
		_brain = new Brain();
		_brain = rhs._brain;
	}
	return *this;
}

Dog::~Dog() {
	delete(_brain);
	std::cout << RED"Dog disappear"RESET << std::endl;
}

void Dog::makeSound() const {
	std::cout << "-Гав-" << std::endl;
}
