//
// Created by Nelson Amerei on 7/9/21.
//

#include "Animal.hpp"

Animal::Animal() : _brain() {
	std::cout << MAG"Animal appear"RESET << std::endl;
}

Animal::Animal(std::string const & type) : _type(type), _brain(new Brain) {
}

Animal::Animal(Animal &i) : _brain() {
	this->_type = i._type;
//	_brain = i.
}

Animal &Animal::operator=(Animal const &animal) {
	this->_type = animal._type;
	return *this;
}

const std::string &Animal::getType() const {
	return _type;
}

Animal::~Animal() {
	std::cout << MAG"Animal disappear"RESET << std::endl;
}

void Animal::makeSound() const {
	std::cout << "-Anime-" << std::endl;
}

std::string Animal::getFirstIdea() {
	return _brain->getFirstIdea();
}

void Animal::makeIdea(std::string const &firstIdea) const {
	_brain->setFirstIdea(firstIdea);
}


