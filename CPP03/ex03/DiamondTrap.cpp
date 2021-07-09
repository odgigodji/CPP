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
	ClapTrap::_name = "_defDiamond__clap_name";
	std::cout << CYN"Default: DiamondTrap was created"RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap() {
	FragTrap f;
	ScavTrap s;
	_d_name = name;
	_attackDamage = s.getAttackDamage();
	_attack = f.getAttackDamage();
	_energyPoints = s.getEnergyPoints();
	ClapTrap::_name = name.append("_clap_name");
	std::cout << CYN"DiamondTrap was created"RESET << std::endl;
}

std::string DiamondTrap::getDName() const {
	return _d_name;
}

unsigned int DiamondTrap::getAttack() const {
	return _attack;
}

DiamondTrap::~DiamondTrap() {
	std::cout << CYN"DiamondTrap destructor called"RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
	if ( this != &rhs ) {
		_d_name = rhs.getDName();
		_attack = rhs._attack;
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setName(rhs.getName());
		setAttackDamage(rhs.getAttackDamage());
	}
	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &d)  : ClapTrap(d), ScavTrap(d), FragTrap(d) {
	_d_name = d._d_name;
	_name = d._name;
	_hitPoints = d._hitPoints;
	_energyPoints = d._energyPoints;
	_attackDamage = d._attackDamage;
	_attack = d._attack;
}

void DiamondTrap::whoAmI() {
	std::cout << RED"|name: " << getDName();
	std::cout << "|Clap::name: " << getName() << RESET << std::endl;
}

std::ostream & operator<<(std::ostream & o, DiamondTrap const & rhs) {
	o << CYN"|name: " << rhs.getDName();
	o << "|Clap::name: " << rhs.getName() << "|hitpoints: " <<  rhs.getHitPoints();
	o << "|energyPoints: " << rhs.getEnergyPoints();
	o << "|attackDmg: " << rhs.getAttackDamage();
	o << "|attack: " << rhs.getAttack() << RESET;
	return o;
}