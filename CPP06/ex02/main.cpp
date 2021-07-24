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
			return (res = new A);
		case 2:
			return (res = new B);
		default:
			return (res = new C);
	}
}

/*
 * identify: displays "A", "B" or "C" accord-
ing to the real type of p.
 */

void identify(Base* p) {

}

int main() {
	Base *a;
	a = generate();
	identify(a);
	return 0;
}