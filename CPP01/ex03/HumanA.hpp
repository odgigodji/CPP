//
// Created by Nelson Amerei on 7/2/21.
//

#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
private:
	Weapon &_weapon;
	std::string _name;
public:
	HumanA(const std::string &name, Weapon &weapon);
	void attack() const;

};

#endif //EX03_HUMANA_HPP
