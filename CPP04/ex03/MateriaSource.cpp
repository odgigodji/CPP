//
// Created by Nelson Amerei on 7/11/21.
//

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource() : Character() {
	std::cout << GRN"+MateriaSource"RESET << std::endl;
}

MateriaSource::MateriaSource(std::string &name) {
	_name = name;
	std::cout << GRN"+MateriaSource"RESET << _name << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &i) {

}

MateriaSource &MateriaSource::operator=(MateriaSource &rhs) {

	return *this;
}

MateriaSource::~MateriaSource() {

}

void MateriaSource::learnMateria(AMateria *materia) {
	std::cout << "learn " << materia->getType() << std::endl;
	if (_idx < 4) {
		_inventory[_idx] = materia;
		_idx++;
	}
	std::cout << "idx is " << _idx << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for(int i = 0; i < 4; ++i) {
		if (_inventory[i]->getType() == type) {
			std::cout << "createMateria " << type << " and " << _inventory[i]->getType() << std::endl;
			return (_inventory[i]);
		}
	}
	return nullptr;
}