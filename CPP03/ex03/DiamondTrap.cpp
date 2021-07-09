//
// Created by Nelson Amerei on 7/8/21.
//

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap() {
	FragTrap f;
	ScavTrap s;
	_d_name = "_defDiamond_";
	_attackDamage = s.getAttackDamage();
	_attack = f.getAttackDamage();
	_energyPoints = s.getEnergyPoints();
	ClapTrap::_name = _d_name.append("_clap_name");
//	std::cout << RED << ScavTrap
	std::cout << CYN"DiamondTrap was created"RESET << std::endl;
//	std::cout << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap() {
	FragTrap f;
	ScavTrap s;
	_d_name = name;
	_attackDamage = s.getAttackDamage();
	_attack = f.getAttackDamage();
	_energyPoints = s.getEnergyPoints();
	ClapTrap::_name = _d_name.append("_clap_name");
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
unsigned int DiamondTrap::getAttack() const {
	return _attack;
}
//	return *this;
//}

std::ostream & operator<<(std::ostream & o, DiamondTrap const & rhs) {
	o << CYN"|name: " << rhs.getDName();
	o << "|Clap::name: " << rhs.getName() << "|hitpoints: " <<  rhs.getHitPoints();
	o << "|energyPoints: " << rhs.getEnergyPoints();
	o << "|attackDmg: " << rhs.getAttackDamage();
	o << "|attack: " << rhs.getAttack() << RESET;
	return o;
}