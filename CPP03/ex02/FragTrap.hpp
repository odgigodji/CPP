//
// Created by Nelson Amerei on 7/8/21.
//

#ifndef EX02_FRAGTRAP_HPP
#define EX02_FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(const FragTrap &fragCopy);
	FragTrap(std::string name);
	FragTrap &operator=(FragTrap const &i);
	~FragTrap();

	void highFivesGuys(void);
};

#endif //EX02_FRAGTRAP_HPP
