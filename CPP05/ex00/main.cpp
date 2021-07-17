#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	//call a constructor with incorrect grade
	Bureaucrat beth("Beth", 1);
	std::cout << std::endl;

	//call constructor with correct args and downGrade
	Bureaucrat rick("Rick", 149);
	rick.downGrade();
	std::cout << rick << std::endl;
	rick.downGrade();
	std::cout << rick << std::endl << std::endl;

	//call constructor with correct args and upGrade
	Bureaucrat morty("Morty", 2);
	morty.upGrade();
	std::cout << morty << std::endl;
	morty.upGrade();
	std::cout << morty << std::endl;

	return 0;
}
