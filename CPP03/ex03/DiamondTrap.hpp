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
//	void setClapName(std::string name);
//	DiamondTrap(const DiamondTrap &diamondCopy);
	explicit DiamondTrap(std::string name);

	std::string getDName() const;

	unsigned int getAttack() const;
//	DiamondTrap &operator=(DiamondTrap const &i);
//	~DiamondTrap();

};

std::ostream & operator<<(std::ostream & o, DiamondTrap const & rhs);

#endif //EX03_DIAMONDTRAP_HPP
