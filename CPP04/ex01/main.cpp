#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {

//	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//
//	delete j;//should not create a leak
//	delete i;

	Animal *a[10];
	for(int i = 0; i < 5; ++i) {
		a[i] = new Dog();
	}
	for(int i = 5; i < 10; ++i) {
		a[i] = new Cat();
	}
	a[0]->makeSound(); //Dog
	a[6]->makeSound();
	for(int i = 0; i < 10; ++i) {
		delete(a[i]);
	}
	return 0;
}

//./animal1 | grep Cat | wc -l
//./animal1 | grep Dog | wc -l
//./animal1 | grep Brain | wc -l
