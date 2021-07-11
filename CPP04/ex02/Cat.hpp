//
// Created by Nelson Amerei on 7/9/21.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP
#include "AAnimal.hpp"

class Cat : public AAnimal {
public:
	Cat();
	Cat(Cat & rhs);
	Cat & operator=(Cat const& rhs);
	~Cat();

	void makeSound() const;
	std::string getType() const;
};


#endif //EX00_CAT_HPP
