#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"



int main() {
	Bureaucrat beth("Beth", 1);
	std::cout << std::endl;

	Bureaucrat rick("Rick", 149);
	rick.downGrade();
	std::cout << rick << std::endl;
	rick.downGrade();
	std::cout << rick << std::endl << std::endl;

	Bureaucrat morty("Morty", 2);
	morty.upGrade();
	std::cout << morty << std::endl;
	morty.upGrade();
	std::cout << morty << std::endl;


	return 0;
}
