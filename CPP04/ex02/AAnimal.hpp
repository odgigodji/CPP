//
// Created by Nelson Amerei on 7/9/21.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"
# define RED    "\x1B[31m"
# define WTH    "\x1B[38m"
# define GRN    "\x1B[32m"
# define YEL    "\x1B[33m"
# define BLU    "\x1B[34m"
# define MAG    "\x1B[35m"
# define CYN    "\x1B[36m"
# define RESET  "\x1B[0m"

class AAnimal {

protected:
	std::string _type;
	Brain *_brain;

public:
	AAnimal();
	explicit AAnimal(std::string const & type);
	AAnimal(AAnimal & i);
	AAnimal &operator=(AAnimal const &animal);
	virtual ~AAnimal();

	virtual std::string getType() const = 0;
	virtual void makeSound() const = 0;
};

#endif //EX00_ANIMAL_HPP
