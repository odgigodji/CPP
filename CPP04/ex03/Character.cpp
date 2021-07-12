//
// Created by Nelson Amerei on 7/11/21.
//

#include "Character.hpp"


Character::Character() : _inventory(), _idx(0) {
	std::cout << GRN"+Character"RESET << std::endl;
}

Character::Character(std::string name) : _inventory(), _idx(0), _name(name) {
	_name = name;
	std::cout << GRN"+Character \"" << _name << "\"" << RESET << std::endl;
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

const std::string &Character::getName() const { return _name; }

void Character::equip(AMateria *m) {
	if (m && _idx >= 0 && _idx < 4 && m->getType().length() != 0) {
		_inventory[_idx] = m;
		_idx++;
	}
}

void Character::unequip(int idx) {
	if (_inventory[idx]) {
		_inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter &target) {
	_inventory[idx]->use(target);
}