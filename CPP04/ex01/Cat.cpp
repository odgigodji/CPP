//
// Created by Nelson Amerei on 7/9/21.
//

#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << GRN"Cat appear"RESET << std::endl;
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

Cat::~Cat() {
	std::cout << GRN"Cat disappear"RESET << std::endl;
}

void Cat::makeSound() const{
	std::cout << "-Мяу-" << std::endl;
}
