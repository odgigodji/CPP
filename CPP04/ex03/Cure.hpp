//
// Created by Nelson Amerei on 7/11/21.
//

#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(Cure & i);
	Cure &operator=(Cure const &rhs);
	~Cure();

//clone() method will, return a new instance of the real Materia’s type.
	AMateria *clone() const;

	void use(ICharacter &target);
};

#endif //EX03_CURE_HPP


