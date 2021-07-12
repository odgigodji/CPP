//
// Created by Nelson Amerei on 7/11/21.
//

#include "AMateria.hpp"

AMateria::AMateria() {
}

AMateria::AMateria(const std::string &type) : _type(type) {}

AMateria::AMateria(AMateria &i) {
	_type = i._type;
}

AMateria &AMateria::operator=(const AMateria &rhs) {
	_type = rhs._type;
	return *this;
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter &target) {
	std::cout << target.getName();
}
