#include <iostream>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {

//	const AAnimal* j = new Dog();
//	const AAnimal* i = new Cat();
//
//	delete j;//should not create a leak
//	delete i;

	AAnimal *a[10];
	for(int i = 0; i < 5; ++i) {
		a[i] = new Dog();
	}
	for(int i = 5; i < 10; ++i) {
		a[i] = new Cat();
	}
	for(int i = 0; i < 10; ++i) {
		a[i]->makeSound();
	}
//	std::cout << a[0]->getType() << std::endl;
	for(int i = 0; i < 10; ++i) {
		delete(a[i]);
	}
//	while(1);
	return 0;
}

//./animal1 | grep Cat | wc -l
//./animal1 | grep Dog | wc -l
//./animal1 | grep Brain | wc -l
