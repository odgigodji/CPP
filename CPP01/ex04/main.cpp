#include "utils.hpp"

int main(int ac, char** av)
{
	if (ac != 4) {
		error(0);
	}
	//reading file in string
	std::string strFile;
	readFile(strFile, av[1]);

	//replace strings in strFile
	replaceStrings(strFile, av[2], av[3]);

	//write string to file
	writeFile(strFile, av[1]);

	return 0;
}