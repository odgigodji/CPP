//
// Created by Nelson Amerei on 7/4/21.
//

#include "Karen.hpp"
int getIndex(std::string level)
{
	if (level == "DEBUG")
		return 1;
	if (level == "INFO")
		return 2;
	if (level == "WARNING")
		return 3;
	if (level == "ERROR")
		return 4;
	return 0;
}

Karen::Karen() {}

void Karen::debug(void) {
	std::cout << CYN"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
				 "I just love it!"RESET << std::endl;
}
void Karen::info(void) {
	std::cout << MAG "I cannot believe adding extra bacon cost more money. "
				"You don’t put enough! If you did I would not have to ask"
				"for it!"RESET << std::endl;
}
void Karen::warning(void) {
	std::cout << PULSE RED"I’ve been W"
			    "coming here for years and you just started working here last month.\""RESET << std::endl;
}
void Karen::error(void) {
	std::cout << YEL"This is unacceptable, I want to speak to the manager now.\""RESET << std::endl;
}

void Karen::complain(std::string level) {
	switch (getIndex(level))
	{
		case 1:
			debug();
			break;
		case 2:
			info();
			break;
		case 3:
			warning();
			break;
		case 4:
			error();
			break;
		default:
			std::cout << BLU"Incorrect argument! Try \"DEBUG\" \"INFO\" \"WARNING\" or \"ERROR\"." RESET << std::endl;
			break;
	}
}
