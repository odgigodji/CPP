//
// Created by Nelson Amerei on 7/11/21.
//

#include "MateriaSource.hpp"
#include "Character.hpp"

MateriaSource::MateriaSource() : Character() {
//	std::cout << GRN"+MateriaSource"RESET << std::endl;
}

MateriaSource::MateriaSource(std::string &name) : Character(name) {
//	std::cout << GRN"+MateriaSource"RESET << _name << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &rhs)  : Character(rhs) {
	_idx = rhs._idx;
	if (rhs._inventory != nullptr) {
		AMateria *m[4];
		for(int i = 0; i < 4 && rhs._inventory[i]; ++i) {
			m[i] = rhs._inventory[i]->clone();
			_inventory[i] = m[i];
		}
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
	if (this == &rhs)
		return (*this);
	_idx = rhs._idx;
	if (rhs._inventory != nullptr) {
		AMateria *m[4];
		for(int i = 0; i < 4 && rhs._inventory[i]; ++i) {
			m[i] = rhs._inventory[i]->clone();
			_inventory[i] = m[i];
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
//	std::cout << RED"-MateriaSource"RESET << std::endl;
}

void MateriaSource::learnMateria(AMateria *materia) {
	static int idx = 0;
//	std::cout << "learn " << materia->getType() << " and ";
	if (idx < 4 ) {
		_inventory[idx] = materia;
		if (_inventory[idx + 1] == nullptr) { idx++; }
	}
//	std::cout << "s_idx is " << idx << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for(int i = 0; i < 4; ++i) {
		//if we have that materia we'll create
		if (_inventory[i] && _inventory[i]->getType() == type) {
//			std::cout << "createMateria " << type << " == " << _inventory[i]->getType() << std::endl;
			return (_inventory[i]);
		}
	}
	return nullptr;
}