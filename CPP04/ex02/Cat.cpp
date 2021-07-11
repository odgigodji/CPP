//
// Created by Nelson Amerei on 7/9/21.
//

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat") { //and brain init
	std::cout << GRN"Cat appear"RESET << std::endl;
}

Cat::Cat(Cat &rhs)  : AAnimal(rhs) {
	_type = rhs._type;
	if (rhs._brain)
	{
		// Выделяем память для нашей копии
		_brain = new Brain();
		// Выполняем копирование
		_brain = rhs._brain;
	}
}

Cat &Cat::operator=(Cat const& rhs) {
	_type = rhs._type;
	if (rhs._brain)
	{
		// Выделяем память для нашей копии
		_brain = new Brain();
		// Выполняем копирование
		_brain = rhs._brain;
	}
	return *this;
}

Cat::~Cat() {
	delete(_brain);
	std::cout << GRN"Cat disappear"RESET << std::endl;
}

void Cat::makeSound() const{
	std::cout << "-Мяу-" << std::endl;
}
