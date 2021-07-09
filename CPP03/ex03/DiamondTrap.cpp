//
// Created by Nelson Amerei on 7/8/21.
//

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap() {
	std::cout << RED << ScavTrap
	std::cout << CYN"DiamondTrap was created"RESET << std::endl;
//	std::cout << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	_d_name = name;
	ClapTrap::_name = name.append("_clap_name");
}

//void DiamondTrap::setClapName(std::string name) {
//	setName(name);
//}


//DiamondTrap::DiamondTrap(std::string name)  {
//	_name = name;
//	_hitPoints = 100;
//	_energyPoints = 100;
//	_attackDamage = 30;
//	std::cout << BLU"Frag constructor called <" << getName() << "> " << "created"RESET << std::endl;
//}
//
//DiamondTrap::~DiamondTrap()  {
//	std::cout << BLU"FragTrap destructor called"RESET << std::endl;
//}
//
//DiamondTrap::DiamondTrap(const DiamondTrap &s)  : ClapTrap(s) {
//	_hitPoints = s._hitPoints;
//	_energyPoints = s._energyPoints;
//	_attackDamage = s._attackDamage;
//}
//
std::string DiamondTrap::getDName() const {
	return _d_name;
}
//DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
//	if ( this != &rhs ) {
//		setHitPoints(rhs.getHitPoints());
//		setEnergyPoints(rhs.getEnergyPoints());
//		setName(rhs.getName());
//		setAttackDamage(rhs.getAttackDamage());
//	}
//	return *this;
//}

