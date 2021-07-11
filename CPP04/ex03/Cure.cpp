//
// Created by Nelson Amerei on 7/11/21.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "CURE is " << _type << std::endl;
}

Cure::Cure(Cure &i)  : AMateria(i) {
	_type = i._type;
}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &rhs) {
	_type = rhs._type;
	return *this;
}
