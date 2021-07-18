#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
//	std::ofstream outf("<target>_shrubbery");
//	outf << "hey\n";
	ShrubberyCreationForm f("f1", 145, 137); //145 , 137
	f.doAction();
	return 0;
}
