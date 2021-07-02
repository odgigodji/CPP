#include <iostream>
#include "Zombie.hpp"

Zombie *newZombie( const std::string& name );
void randomChump( std::string name );

int main() {
	Zombie brian("Brian");

	Zombie *sean;
	sean = newZombie("Sean");
	sean->announce();

	randomChump("John");
	std::cout << "-check0" << std::endl;

	delete(sean);
	std::cout << "-check1" << std::endl;
	return 0;
}
