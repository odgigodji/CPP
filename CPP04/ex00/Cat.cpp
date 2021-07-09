//
// Created by Nelson Amerei on 7/9/21.
//

#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
}

Cat::Cat(std::string type) : Animal(type) {}

Cat::Cat(Cat &i) {
	if ( this != &i)
		this->_type = i._type;
}

Cat &Cat::operator=(Cat &rhs) {
	this->_type = rhs._type;
	return *this;
}

Cat::~Cat() {}

void Cat::makeSound() const{
	std::cout << "-Мяу-" << std::endl;
}
