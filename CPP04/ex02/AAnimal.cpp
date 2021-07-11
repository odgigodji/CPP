//
// Created by Nelson Amerei on 7/9/21.
//

#include "AAnimal.hpp"

AAnimal::AAnimal() : _brain() {
	std::cout << MAG"AAnimal appear"RESET << std::endl;
}

AAnimal::AAnimal(std::string const & type) : _type(type), _brain(new Brain) {
	std::cout << MAG"AAnimal appear"RESET << std::endl;
}

AAnimal::AAnimal(AAnimal &i) : _brain() {
	this->_type = i._type;
}

AAnimal &AAnimal::operator=(AAnimal const &animal) {
	this->_type = animal._type;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << MAG"AAnimal disappear"RESET << std::endl;
}
