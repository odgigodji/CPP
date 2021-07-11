//
// Created by Nelson Amerei on 7/11/21.
//

#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP
#include "Character.hpp"

class MateriaSource {
protected:
	std::string _name;
	AMateria *_materia[4];
	int _idx;
public:
	MateriaSource();
	explicit MateriaSource(std::string &name);
	MateriaSource(MateriaSource & i);
	MateriaSource &operator=(MateriaSource &rhs);
	~MateriaSource();
};


#endif //EX03_MATERIASOURCE_HPP
