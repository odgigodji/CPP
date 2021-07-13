//
// Created by Nelson Amerei on 7/11/21.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

# define GRN  	"\x1B[32m"
# define RED  	"\x1B[31m"
# define BLU  	"\x1B[34m"
# define WTH  	"\x1B[38m"
# define YEL  	"\x1B[33m"
# define MAG  	"\x1B[35m"
# define CYN  	"\x1B[36m"
# define RESET	"\x1B[0m"

class AMateria {
protected:
	std::string _type;

public:
	AMateria();
	explicit AMateria(std::string const & type);
	AMateria(AMateria & i);
	AMateria &operator=(AMateria const &rhs);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia's type

	virtual AMateria* clone() const = 0;

	virtual void use(ICharacter& target); //get name of target
};


#endif //EX03_AMATERIA_HPP
