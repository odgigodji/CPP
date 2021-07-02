//
// Created by Nelson Amerei on 7/2/21.
//

#include "HumanA.hpp"

void HumanA::attack() const {
	std::cout << RED << _name <<
	" attacks with his "UNDLN << _weapon.getType()
	<< RESET << std::endl;
}

//getters and setters:
const std::string &HumanA::getName() const {
	return _name;
}
void HumanA::setName(const std::string &name) {
	_name = name;
}
const Weapon &HumanA::getWeapon() const {
	return _weapon;
}

void HumanA::setWeapon( const Weapon &weapon) {
	_weapon = weapon;
}

HumanA::HumanA(const std::string &name, const Weapon &weapon) : _weapon(weapon), _name(name) {}

