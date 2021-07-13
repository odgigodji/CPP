//
// Created by Nelson Amerei on 7/11/21.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP
#include "AMateria.hpp"

class Character : public ICharacter {
protected:
	std::string _name;
	AMateria *_inventory[4];
	int _idx;
public:
	Character();
	explicit Character(std::string name);
	Character(Character & i);
	Character &operator=(Character &rhs);
	~Character();

	const std::string &getName() const;

//The Character possesses an inventory of 4 Materia at most, empty at the start. He’ll
//equip the Materia in slots 0 to 3, in this order.
//In case we try to equip a Materia in a full inventory, or use/unequip a nonexistent
//Materia, don’t do a thing.
	void equip(AMateria *m);

//materia in inventory to the nullptr
	void unequip(int idx);

//use method will have to use the Materia at the idx slot,
//and pass target as parameter to the AMateria::use method.
	void use(int idx, ICharacter &target);
};


#endif //EX03_CHARACTER_HPP




