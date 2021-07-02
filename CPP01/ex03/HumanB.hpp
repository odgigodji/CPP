//
// Created by Nelson Amerei on 7/2/21.
//

#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
private:
	Weapon _weapon;
	std::string _name;
	void attack() const;
};


#endif //EX03_HUMANB_HPP
