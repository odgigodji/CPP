//
// Created by Nelson Amerei on 7/11/21.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "ICE is " << _type << std::endl;
}

Ice::Ice(Ice &i)  : AMateria(i) {
	_type = i._type; //new and all shit
}

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &rhs) {
//	Ice i =
	_type = rhs._type;
	return *this;
}

AMateria *Ice::clone() const {
	AMateria *materia = new Ice;
	return materia;
}
