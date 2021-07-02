//
// Created by Nelson Amerei on 7/2/21.
//

#include "HumanB.hpp"

void HumanB::attack() const { //not weapon
	std::cout << GRN << _name << "attacks with his " << _weapon.getType() << RESET << std::endl;
}
