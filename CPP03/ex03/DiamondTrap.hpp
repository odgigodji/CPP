//
// Created by Nelson Amerei on 7/8/21.
//

#ifndef EX03_DIAMONDTRAP_HPP
#define EX03_DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string 	_d_name;
	unsigned int 	_attack;
public:
	DiamondTrap();
	explicit DiamondTrap(std::string name);
	DiamondTrap &operator=(DiamondTrap const &i);
	DiamondTrap(const DiamondTrap &diamondCopy);
	~DiamondTrap();

	std::string getDName() const;
	unsigned int getAttack() const;
	void whoAmI();
};

std::ostream & operator<<(std::ostream & o, DiamondTrap const & rhs);

#endif //EX03_DIAMONDTRAP_HPP
