#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>

Base *generate(void) {
	Base *res;
	std::srand(static_cast<unsigned int>(std::time(NULL)));

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
	A *a;
	B *b;
	C *c;

//dynamic cast return null if casting failed
	if ((a = dynamic_cast<A *>(p))) { std::cout << "it's A" << std::endl; }
	else if ((b = dynamic_cast<B *>(p))) { std::cout << "it's B" << std::endl; }
	else {std::cout << "it's C" << std::endl; }
}

void identify(Base& p) {

}

int main() {
	Base *a;
	a = generate();
	identify(a);
	return 0;
}