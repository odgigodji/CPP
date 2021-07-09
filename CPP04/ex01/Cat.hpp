//
// Created by Nelson Amerei on 7/9/21.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(std::string type);
	Cat(Cat & i);
	Cat & operator=(Cat & rhs);
	~Cat();

	virtual void makeSound() const;
};


#endif //EX00_CAT_HPP
