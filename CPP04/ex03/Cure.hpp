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
};

#endif //EX03_CURE_HPP
