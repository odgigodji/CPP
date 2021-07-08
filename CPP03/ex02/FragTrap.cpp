//
// Created by Nelson Amerei on 7/8/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("_defFrag_") {
//	_name = "_defFrag_";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)  {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << BLU"Frag constructor called <" << getName() << "> " << "created"RESET << std::endl;
}

FragTrap::~FragTrap()  {
	std::cout << BLU"FragTrap destructor called"RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &s)  : ClapTrap(s) {
//	_name = s._name;
	_hitPoints = s._hitPoints;
	_energyPoints = s._energyPoints;
	_attackDamage = s._attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	if ( this != &rhs ) {
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setName(rhs.getName());
		setAttackDamage(rhs.getAttackDamage());
	}
	return *this;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "High five, guys?" << std::endl;
}
