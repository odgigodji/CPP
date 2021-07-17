#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"



int main() {
	Bureaucrat rick("rick", 149);
	std::cout << rick << std::endl;
	rick.downGrade();
	std::cout << rick << std::endl;
	rick.downGrade();
	std::cout << rick << std::endl;

	Bureaucrat morty("morty", 2);
	std::cout << morty << std::endl;
	morty.upGrade();
	std::cout << morty << std::endl;
	morty.upGrade();
	std::cout << morty << std::endl;


	return 0;
}
