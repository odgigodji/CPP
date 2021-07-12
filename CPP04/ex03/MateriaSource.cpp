//
// Created by Nelson Amerei on 7/11/21.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

}

MateriaSource::MateriaSource(std::string &name) {

}

MateriaSource::MateriaSource(MateriaSource &i) {

}

MateriaSource &MateriaSource::operator=(MateriaSource &rhs) {
	return *this;
}

MateriaSource::~MateriaSource() {

}

void MateriaSource::learnMateria(AMateria *materia) {

}

AMateria *MateriaSource::createMateria(const std::string &type) {
	return NULL;
}