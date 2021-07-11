//
// Created by Nelson Amerei on 7/9/21.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP
#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	explicit Dog(std::string type);
	Dog(Dog & i);
	~Dog();
	Dog & operator=(Dog const& rhs);

	virtual void makeSound() const;
//	virtual void makeIdea(std::string const &firstIdea) const;
};


#endif //EX00_DOG_HPP
