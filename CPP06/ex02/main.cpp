#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <stdexcept>

Base *generate(void) {
	Base *res;
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	std::cout << "generate: ";
	switch ((rand() % 3) + 1) {
		case 1:
			std::cout << "new A" << std::endl;
			return (res = new A);
		case 2:
			std::cout << "new B" << std::endl;
			return (res = new B);
		default:
			std::cout << "new C" << std::endl;
			return (res = new C);
	}
}

/*
 * identify: displays "A", "B" or "C" accord-
ing to the real type of p.
 + приведением к базовому типу
 */

void identify(Base* p) {
	std::cout << "identyfy PTR: ";

//dynamic cast return null if casting failed
	if ((dynamic_cast<A *>(p))) {
		std::cout << "it's A" << std::endl;
	} else if ((dynamic_cast<B *>(p))) {
		std::cout << "it's B" << std::endl;
	} else if ((dynamic_cast<C *>(p))) {
		std::cout << "it's C" << std::endl;
	}
}

//with reference dynamic cast can't return null, but throw exception bad_cast
void identify(Base& p) {
	std::cout << "identyfy REf: ";

//	if ((A &a = dynamic_cast<A &>(p))) { std::cout << "it's A" << std::endl; }
	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "it's A" << std::endl;
	}
	catch (std::exception &e) {}

	try {
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "it's B" << std::endl;
	}
	catch (std::exception &e) {}

	try {
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "it's C" << std::endl;
	}
	catch (std::exception &e) {}
}

int main() {
	Base *a;
	a = generate();
	identify(a);

	Base &b = *a;
	identify(b);
	delete a;

	return 0;
}