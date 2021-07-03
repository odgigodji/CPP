//
// Created by Nelson Amerei on 7/1/21.
//

#include "Zombie.hpp"
#include <iostream>
#define MAG    "\x1B[35m"
#define CYN    "\x1B[36m"
#define RESET  "\x1b[0m"

Zombie::Zombie(const std::string& name) {
	setName(name);
}
Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << CYN "<" << getName() << "> is dead without brainZZZ" RESET << std::endl;
}

void Zombie::announce(void) const {
	std::cout << MAG"<" << getName() << "> " << "BraiiiiiiinnnzzzZ..."RESET  << std::endl;
}

const std::string &Zombie::getName() const {
	return _name;
}

void Zombie::setName(const std::string &name) {
	Zombie::_name = name;
}

