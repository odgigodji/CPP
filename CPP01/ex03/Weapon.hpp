//
// Created by Nelson Amerei on 7/2/21.
//

#ifndef EX03_WEAPON_HPP
#define EX03_WEAPON_HPP
#include <iostream>
# define MAG    "\x1B[35m"
# define CYN    "\x1B[36m"
# define RESET  "\x1B[0m"
# define UNDLN	"\x1b[4m"

class Weapon {
public:

	Weapon(const std::string &type);

	const std::string &getType() const;

	void setType(const std::string &type);

private:
	std::string _type;
};


#endif //EX03_WEAPON_HPP
