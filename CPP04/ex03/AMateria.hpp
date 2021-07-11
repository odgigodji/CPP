//
// Created by Nelson Amerei on 7/11/21.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP
#include <iostream>

class AMateria {
protected:

public:
	AMateria(std::string const &type);

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //EX03_AMATERIA_HPP
