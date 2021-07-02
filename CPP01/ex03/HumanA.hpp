//
// Created by Nelson Amerei on 7/2/21.
//

#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
private:
	Weapon _weapon;
	std::string _name;
public:
	HumanA(const std::string &name, const Weapon &weapon);

	void attack() const;

	const std::string &getName() const;

	void setName(const std::string &name);

	const Weapon &getWeapon() const;

	void setWeapon(const Weapon &weapon);
};

#endif //EX03_HUMANA_HPP
