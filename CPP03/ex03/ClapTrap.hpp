//
// Created by Nelson Amerei on 7/7/21.
//

#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP
# include <iostream>

# define RED    "\x1B[31m"
# define WTH    "\x1B[38m"
# define GRN    "\x1B[32m"
# define YEL    "\x1B[33m"
# define BLU    "\x1B[34m"
# define MAG    "\x1B[35m"
# define CYN    "\x1B[36m"
# define RESET  "\x1B[0m"

class ClapTrap //base class
{
protected: //private but visible by heritance
	std::string		_name;
	unsigned int	_hitPoints;		//100
	unsigned int 	_energyPoints; 	//50 //-3 when attack
	unsigned int 	_attackDamage;	//20

public:
	ClapTrap();
	ClapTrap(const ClapTrap &trapCopy);
	ClapTrap(std::string name);
	ClapTrap &operator=(ClapTrap const &i);
	~ClapTrap();

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

//GETTERS AND SETTERS:
	void setHitPoints(unsigned int hitPoints);
	unsigned int getHitPoints() const;
	void setAttackDamage(unsigned int attackDamage);
	const std::string &getName() const;
	unsigned int getAttackDamage() const;

	void setName(const std::string &name);

	unsigned int getEnergyPoints() const;

	void setEnergyPoints(unsigned int energyPoints);

};

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs);

#endif //EX00_CLAPTRAP_HPP
