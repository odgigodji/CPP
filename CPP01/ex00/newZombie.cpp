//
// Created by Nelson Amerei on 7/1/21.
//

#include "Zombie.hpp"

Zombie *newZombie( const std::string& name ) {
	Zombie *z = new Zombie(name);
	return (z);
}