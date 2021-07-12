//
// Created by Nelson Amerei on 7/11/21.
//

#include "Character.hpp"


Character::Character() : _materia(), _idx(0) {

}

Character::Character(std::string &name) : _materia(), _idx(0), _name(name) {

}

Character::Character(Character &i) {
	//deep copy
}

Character &Character::operator=(Character &rhs) {
	//deep copy
	return *this;
}

Character::~Character() {
	//delete character
}

const std::string &Character::getName() const {
	return _name;
}
