//
// Created by Nelson Amerei on 7/11/21.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
//	std::cout << GRN"+Ice"RESET << std::endl;
}

Ice::Ice(Ice &i)  : AMateria(i) {
	_type = i._type; //new and all shit
}

Ice::~Ice() {
	std::cout << RED"-Ice"RESET << std::endl;
}

Ice &Ice::operator=(const Ice &rhs) {
	_type = rhs._type;
	return *this;
}

AMateria *Ice::clone() const {
	AMateria *materia = new Ice;
	return materia;
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at ";  //<< getname
	AMateria::use(target);
	std::cout << " *" << std::endl;
}
