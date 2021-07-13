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
	std::cout << RED"-Character"RESET << std::endl;
}

const std::string &Character::getName() const { return _name; }

void Character::equip(AMateria *m) {
	//skip equiped cells
	for(_idx = 0;_inventory[_idx] != nullptr; ++_idx);

	//equip in empty cell
	if (_idx < 4 && _inventory[_idx] == nullptr) {
		std::cout << BLU"equip materia in idx " << _idx << RESET << std::endl;
		_inventory[_idx] = m;
//		_idx++;
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && _inventory[idx]) {
		std::cout << RED"unequip materia from idx " << idx << RESET << std::endl;
		_inventory[idx] = nullptr;
//		_idx = idx;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && _inventory[idx]) {
		_inventory[idx]->use(target);
	}
}