//
// Created by Nelson Amerei on 7/11/21.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(Ice & i);
	Ice &operator=(Ice const &rhs);
	~Ice();

//	virtual std::string const & getName() const;
//	virtual void equip(AMateria* m);
//	virtual void unequip(int idx);
//	virtual void use(int idx, ICharacter& target);
};


#endif //EX03_ICE_HPP
