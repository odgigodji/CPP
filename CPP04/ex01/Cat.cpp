//
// Created by Nelson Amerei on 7/9/21.
//

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") { //and brain init
//	_type = "Cat";
//	_brain = new Brain();
	std::cout << GRN"Cat appear"RESET << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {}

Cat::Cat(Cat &i)  : Animal(i) {
	this->_type = i._type;
}

Cat &Cat::operator=(Cat const& rhs) {
	_type = rhs._type;
	if (rhs._brain)
	{
		// Выделяем память для нашей копии
		_brain = new Brain();

		// Выполняем копирование
		Brain d = Brain();
		_brain = rhs._brain;
//		_brain = Brain(rhs._brain);
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
