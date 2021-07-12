//
// Created by Nelson Amerei on 7/11/21.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"
//#include "Ice.hpp"

class AMateria {
protected:
	std::string _type;

public:
	AMateria();
	explicit AMateria(std::string const & type);
	AMateria(AMateria & i);
	AMateria &operator=(AMateria const &rhs);
	~AMateria();

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //EX03_AMATERIA_HPP
