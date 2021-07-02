#include <iostream>
#include "Zombie.hpp"

Zombie *newZombie( const std::string& name );
void randomChump( std::string name );

int main() {
	Zombie *sean;
	sean = newZombie("sean");
	sean->announce();
//	randomChump("sean");
	delete(sean);
	return 0;
}
