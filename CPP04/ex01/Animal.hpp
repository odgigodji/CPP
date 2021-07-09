//
// Created by Nelson Amerei on 7/9/21.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP
#include <iostream>
# define RED    "\x1B[31m"
# define WTH    "\x1B[38m"
# define GRN    "\x1B[32m"
# define YEL    "\x1B[33m"
# define BLU    "\x1B[34m"
# define MAG    "\x1B[35m"
# define CYN    "\x1B[36m"
# define RESET  "\x1B[0m"


class Animal {
protected:
	std::string _type;

public:
	Animal();
	Animal(std::string type);
	Animal(Animal & i);
	Animal & operator=(Animal & animal);
	~Animal();

	const std::string &getType() const;
	virtual void makeSound() const;
};


#endif //EX00_ANIMAL_HPP
