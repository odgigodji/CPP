//
// Created by Nelson Amerei on 7/8/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_name = "_defScav_";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)  {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << BLU"Scav constructor called <" << getName() << "> " << "created"RESET << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << BLU"ScavTrap destructor called"RESET << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap have enterred in Gate keeper mode "<<  std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &s) {
	_name = s._name;
	_hitPoints = s._hitPoints;
	_energyPoints = s._energyPoints;
	_attackDamage = s._attackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	if ( this != &rhs ) {
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setName(rhs.getName());
		setAttackDamage(rhs.getAttackDamage());
	}
	return *this;
}
