//
// Created by Nelson Amerei on 7/9/21.
//

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
	std::cout << RED"Dog appear"RESET << std::endl;
}

Dog::Dog(Dog &i)  : AAnimal(i) {
	_type = i._type;
	if (i._brain)
	{
		// Выделяем память для нашей копии
		_brain = new Brain();
		// Выполняем копирование
		_brain = i._brain;
	}
}

Dog &Dog::operator=(Dog const& rhs) {
	_type = rhs._type;
	if (rhs._brain)
	{
		// Выделяем память для нашей копии
		_brain = new Brain();
		// Выполняем копирование
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


std::string Dog::getType() const {
	return _type;
}
