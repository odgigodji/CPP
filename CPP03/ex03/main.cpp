#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	ScavTrap sc("Scav");
	std::cout << sc.getAttackDamage() << std::endl;
	DiamondTrap dm("DiamondBoy");
	std::cout << dm.getName() << std::endl;
	std::cout << dm.getDName() << std::endl;
	std::cout << dm.getEnergyPoints() << std::endl;
	std::cout << dm.getAttackDamage() << std::endl;
	dm.guardGate();
	return 0;

}
