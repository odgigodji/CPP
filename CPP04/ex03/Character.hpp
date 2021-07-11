//
// Created by Nelson Amerei on 7/11/21.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP
#include "AMateria.hpp"

class Character {
protected:
	std::string _name;
	AMateria *_materia[3];
public:
	Character();
	Character(std::string name);
	Character(Character & i);
	Character &operator=(Character &rhs);
	~Character();
};


#endif //EX03_CHARACTER_HPP
