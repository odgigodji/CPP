//
// Created by Nelson Amerei on 7/9/21.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP
#include "AAnimal.hpp"

class Dog : public AAnimal {
public:
	Dog();
	Dog(Dog & rhs);
	~Dog();
	Dog & operator=(Dog const& rhs);

	virtual void makeSound() const;
};


#endif //EX00_DOG_HPP
