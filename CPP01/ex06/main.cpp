#include "Karen.hpp"

int main(int ac, char *av[]) {
	Karen bot;
	if (ac != 2) {
		std::cout << RED"Incorrect num of argument, must be 1.\n"RESET;
	} else {
		bot.complain(av[1]);
	}
	return (0);
}
