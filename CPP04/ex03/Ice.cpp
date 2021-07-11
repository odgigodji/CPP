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
	_type = rhs._type;
	return *this;
}

//std::string const &Ice::getName() const {
//	return <#initializer#>;
//}
//
//void Ice::equip(AMateria *m) {
//
//}
//
//void Ice::unequip(int idx) {
//
//}
//
//void Ice::use(int idx, ICharacter &target) {
//
//}
