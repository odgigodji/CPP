//
// Created by Nelson Amerei on 7/9/21.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP
#include <iostream>

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
