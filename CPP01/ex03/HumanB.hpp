//
// Created by Nelson Amerei on 7/2/21.
//

#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
private:
//используем тут указатель так как у нас модет и не быть члена *weapon
//в отличии от ссылки может никуда не указывать и просто отсутствовать
	Weapon *_weapon;
	std::string _name;

public:
	void attack() const;
	void setWeapon(Weapon &weapon);

	HumanB(const std::string &name);
};

#endif //EX03_HUMANB_HPP
