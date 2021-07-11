//
// Created by Nelson Amerei on 7/9/21.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP
#include "AAnimal.hpp"

class Dog : public AAnimal {
public:
	Dog();
	Dog(Dog & i);
	~Dog();
	Dog & operator=(Dog const& rhs);

	void makeSound() const;
	std::string getType() const;
};


#endif //EX00_DOG_HPP
