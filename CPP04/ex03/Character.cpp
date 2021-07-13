//
// Created by Nelson Amerei on 7/11/21.
//

#include "Character.hpp"

Character::Character() : _inventory(), _idx(0) {
//	std::cout << GRN"+Character"RESET << std::endl;
}

Character::Character(std::string name) : _name(name), _inventory(), _idx(0)  {
//	std::cout << GRN"+Character \"" << _name << "\"" << RESET << std::endl;
}

Character::Character(Character &rhs) : _inventory() {
	_idx = rhs._idx;
	if (rhs._inventory != nullptr) {
		for(int i = 0; i < 4; ++i) { if (_inventory[i] != nullptr) { delete _inventory[i]; } }
		AMateria *m[4];
		for(int i = 0; i < 4 && rhs._inventory[i]; ++i) {
			m[i] = rhs._inventory[i]->clone();
			_inventory[i] = m[i];
		}
	}
}

Character &Character::operator=(Character const&rhs) {
//	_name = rhs._name;
	if (this == &rhs)
		return (*this);
	_idx = rhs._idx;
	if (rhs._inventory != nullptr) {
		for(int i = 0; i < 4; ++i) { if (_inventory[i] != nullptr) { delete _inventory[i]; } }
		AMateria *m[4];
		for(int i = 0; i < 4 && rhs._inventory[i]; ++i) {
			m[i] = rhs._inventory[i]->clone();
			_inventory[i] = m[i];
		}
	}
	return *this;
}

Character::~Character() {
	if (_inventory != nullptr) {
		for(int i = 0; i < 4; ++i) {
			if (_inventory[i] != nullptr) { delete _inventory[i]; }
		}
	}
//	std::cout << RED"-Character"RESET << std::endl;
}

const std::string &Character::getName() const { return _name; }

void Character::equip(AMateria *m) {
	//skip equiped cells
	for(_idx = 0;_inventory[_idx] != nullptr; ++_idx);

	//equip in empty cell
	if (_idx < 4 && _inventory[_idx] == nullptr) {
		std::cout << BLU"equip materia in idx " << _idx << RESET << std::endl;
		_inventory[_idx] = m;
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && _inventory[idx]) {
		std::cout << RED"unequip materia from idx " << idx << RESET << std::endl;
		_inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && _inventory[idx]) {
		_inventory[idx]->use(target);
	}
}