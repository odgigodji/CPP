//
// Created by Nelson Amerei on 7/1/21.
//

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string& name) {
	setName(name);
}

Zombie::~Zombie() {}

void Zombie::announce(void) {
	std::cout << "<" << getName() << "> " << "BraiiiiiiinnnzzzZ..."  << std::endl;
}

const std::string &Zombie::getName() const {
	return _name;
}

void Zombie::setName(const std::string &name) {
	Zombie::_name = name;
}

//Zombie *Zombie::newZombie(std::string name) {
//	return NULL;
//}
