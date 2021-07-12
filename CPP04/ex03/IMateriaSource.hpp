//
// Created by Nelson Amerei on 7/11/21.
//

#ifndef EX03_IMATERIASOURCE_HPP
#define EX03_IMATERIASOURCE_HPP
#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}

//	learnMateria must copy the Materia passed as a parameter, and store it in memory
//	to be cloned later. Much in the same way as for Character , the Source can know at
//			most 4 Materia, which are not necessarily unique.
	virtual void learnMateria(AMateria*) = 0;

//	createMateria(std::string const &) will return a new Materia, which will be a
//	copy of the Materia (previously learned by the Source) which type equals the parameter.
//	Returns 0 if the type is unknown.
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //EX03_IMATERIASOURCE_HPP
