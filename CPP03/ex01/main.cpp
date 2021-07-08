#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ScavTrap sc("ScavBoy");
	std::cout << sc << std::endl;

	sc.attack("somewhat");
	sc.takeDamage(15);
	std::cout << sc << std::endl;

	sc.beRepaired(10);
	std::cout << sc << std::endl;

	sc.guardGate();

	ScavTrap a;
	a = sc;
	a.setName("Aleks");
	std::cout << a << std::endl;
	return 0;
}
