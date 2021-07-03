#include <iostream>
#include "Zombie.hpp"

int main() {
	Zombie *horde;
	horde = zombieHorde(8, "Sean");
	for(int i = 0; i < 8; ++i) {
		horde[i].announce();
	}
	delete []horde;
	return 0;
}
