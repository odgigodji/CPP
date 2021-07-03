//
// Created by Nelson Amerei on 7/2/21.
//

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
		: _name(name) {} //weapon ref to &weapon

void HumanB::attack() const {
	std::cout << GRN << _name <<
			  " attacks with his "UNDLN << _weapon->getType()
			  << RESET << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
//	std::cout << weapon.getType();
//	*_weapon = weapon;
}
