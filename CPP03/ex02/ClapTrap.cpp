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
	if (_hitPoints > amount) { _hitPoints -= amount; } else
		_hitPoints = 0;
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
	o << "|energyPoints:" << rhs.getEnergyPoints();
	o << "|attackDmg: " << rhs.getAttackDamage() << RESET;
	return o;
}


//******************************************SCAVTRAP************************:
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


//************************************FragTrap*******************************:

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
