//
// Created by Nelson Amerei on 7/7/21.
//

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : _name("_defClap_"), _hitPoints(10),
_energyPoints(10), _attackDamage(0) {
	std::cout << MAG"ClapTrap default constructor called"RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10),
_energyPoints(10), _attackDamage(0) {
	std::cout << MAG"Constructor called <" << getName() << "> " << "created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &t) : _name(t._name),
_hitPoints(t._hitPoints), _energyPoints(t._energyPoints),
_attackDamage(t._attackDamage) {
//	std::cout << "Copy constructor of ClapTrap" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	if ( this != &rhs ) {
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setName(rhs.getName());
		setAttackDamage(rhs.getAttackDamage());
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << MAG"ClapTrap destructor called"RESET << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	setEnergyPoints(getEnergyPoints() - 3);
	std::cout << RED"ClapTrap <" << getName() << "> attacks <"
	<< target << "> causing <" << getAttackDamage() << "> points of damage!"RESET << std::endl;
}

void ClapTrap::setName(const std::string &name) {
	_name = name;
}

unsigned int ClapTrap::getEnergyPoints() const {
	return _energyPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
	_energyPoints = energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount) {
	_hitPoints -= amount;
	std::cout << YEL"ClapTrap <" << getName() << "> attacked and lost <";
	std::cout <<  amount << "> points "RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	_hitPoints += amount;
	std::cout << GRN"ClapTrap <" << getName() << "> repaired <";
	std::cout << "for <" << amount << "> hit points "RESET << std::endl;
}

//SETTERS
void ClapTrap::setHitPoints(unsigned int hitPoints) {
	_hitPoints = hitPoints;
}

unsigned int ClapTrap::getHitPoints() const {
	return _hitPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
	_attackDamage = attackDamage;
}

const std::string &ClapTrap::getName() const {
	return _name;
}

unsigned int ClapTrap::getAttackDamage() const {
	return _attackDamage;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs) {
	o << CYN"|name:" << rhs.getName() << "|hitpoints:" <<  rhs.getHitPoints();
	o << "|energyPoints:" << rhs.getEnergyPoints() << RESET;
	return o;
}

