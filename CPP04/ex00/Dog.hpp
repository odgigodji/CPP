//
// Created by Nelson Amerei on 7/9/21.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP
#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(std::string type);
	Dog(Dog & i);
	Dog & operator=(Dog & rhs);
	~Dog();

	virtual void makeSound() const;

};


#endif //EX00_DOG_HPP
