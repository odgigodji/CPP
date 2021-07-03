//
// Created by Nelson Amerei on 7/2/21.
//

#include "Weapon.hpp"


Weapon::Weapon(const std::string &type) {
	setType(type);
}

//getter and setter:
const std::string &Weapon::getType() const {
	return _type;
}
void Weapon::setType(const std::string &type) {
//	std::cout << type << std::endl;
	_type = type;
//	std::cout << type << std::endl;
}

