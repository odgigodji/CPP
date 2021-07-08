#include <iostream>
#include "ClapTrap.hpp"

int main() {
	ClapTrap aleks("Aleks");
	ClapTrap brian;
//	brian = aleks; // operator overloaded
	brian = ClapTrap(aleks);
	brian.setName("Brian");
	std::cout << aleks << std::endl << brian << std::endl;
	aleks.attack("something");

	aleks.takeDamage(5);
	std::cout << aleks << std::endl;

	aleks.beRepaired(7);
	std::cout << aleks << std::endl;
	return 0;
}
