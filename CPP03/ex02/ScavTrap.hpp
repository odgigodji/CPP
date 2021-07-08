//
// Created by Nelson Amerei on 7/8/21.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const ScavTrap &scavCopy);
	ScavTrap(std::string name);
	ScavTrap &operator=(ScavTrap const &i);
	~ScavTrap();

	void guardGate();
};


#endif //EX01_SCAVTRAP_HPP
