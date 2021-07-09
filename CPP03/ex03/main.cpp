#include <iostream>
#include "DiamondTrap.hpp"

int main() {
	DiamondTrap dm;

	std::cout << dm << std::endl;
	dm.attack("somewhat");

	dm.takeDamage(58);
	std::cout << dm << std::endl;

	dm.guardGate();
	dm.highFivesGuys();

	DiamondTrap dm1("Copy");
	DiamondTrap dm2;
	dm2 = dm1;
	std::cout << dm2 << std::endl;

	DiamondTrap dm3;
	dm3 = DiamondTrap(dm1);
	std::cout << dm3 << std::endl;

	dm3.whoAmI();
	return 0;
}
