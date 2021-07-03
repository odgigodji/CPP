//
// Created by Nelson Amerei on 7/2/21.
//

#include "HumanB.hpp"


void HumanB::attack() const {
	std::cout << MAG << _name <<
	" attacks with his "UNDLN << _weapon->getType()
	<< RESET << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

HumanB::HumanB(const std::string &name) : _name(name) {

}
