//
// Created by Nelson Amerei on 7/11/21.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << GRN"+Cure"RESET << std::endl;
}

Cure::Cure(Cure &i)  : AMateria(i) {
	_type = i._type;
}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &rhs) {
	_type = rhs._type;
	return *this;
}

AMateria *Cure::clone() const {
	AMateria *materia = new Cure;
	return materia;
}

void Cure::use(ICharacter &target) {
	std::cout << " *  heals ";
	AMateria::use(target);
	std::cout << "’s wounds" << std::endl;
}