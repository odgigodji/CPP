//
// Created by Nelson Amerei on 7/11/21.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria, public ICharacter {
public:
	Ice();
	Ice(Ice & i);
	Ice &operator=(Ice const &rhs);
	~Ice();
};


#endif //EX03_ICE_HPP
