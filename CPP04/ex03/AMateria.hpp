//
// Created by Nelson Amerei on 7/11/21.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class AMateria {
protected:
	std::string _type;

public:
	AAnimal();
	explicit AAnimal(std::string const & type);
	AAnimal(AAnimal & i);
	AAnimal &operator=(AAnimal const &rhs);
	~AAnimal();

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //EX03_AMATERIA_HPP
