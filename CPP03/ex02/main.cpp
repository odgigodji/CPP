#include <iostream>
#include "ClapTrap.hpp"

int main() {
	FragTrap fg("FragBoy");
	std::cout << fg << std::endl;

	fg.attack("somewhat");
	fg.takeDamage(15);
	std::cout << fg << std::endl;

	fg.beRepaired(10);
	std::cout << fg << std::endl;

	fg.highFivesGuys();

	FragTrap a;
	a = fg;
	a.setName("Aleks");
	std::cout << a << std::endl;
	return 0;
}
