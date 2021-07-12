//
// Created by Nelson Amerei on 7/11/21.
//

#include "Character.hpp"


Character::Character() : _inventory(), _idx(0) {

}

Character::Character(std::string &name) : _inventory(), _idx(0), _name(name) {

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

void Character::equip(AMateria *m) {
	if (m && _idx >= 0 && _idx < 4 && m->getType().length() != 0) {
		_inventory[_idx] = m;
		_idx++;
	}
}
