//
// Created by Nelson Amerei on 7/2/21.
//

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
: _weapon(weapon), _name(name) {} //weapon ref to &weapon

void HumanA::attack() const {
	std::cout << RED << _name <<
	" attacks with his "UNDLN << _weapon.getType()
	<< RESET << std::endl;
}

