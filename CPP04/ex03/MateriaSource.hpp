//
// Created by Nelson Amerei on 7/11/21.
//

#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP
#include "Character.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource , public Character {
public:
	MateriaSource();
	explicit MateriaSource(std::string &name);
	MateriaSource(MateriaSource & i);
	MateriaSource &operator=(MateriaSource &rhs);
	~MateriaSource();

//learnMateria must copy the Materia passed as a parameter, and store it in memory
//to be cloned later. Much in the same way as for Character , the Source can know at
//most 4 Materia, which are not necessarily unique.
	void learnMateria(AMateria *materia);


//createMateria(std::string const &) will return a new Materia, which will be a
//	copy of the Materia (previously learned by the Source) which type equals the parameter.
//	Returns 0 if the type is unknown.
	AMateria *createMateria(const std::string &type);
};


#endif //EX03_MATERIASOURCE_HPP


