#include <iostream>
#include <fstream>
# define CYN    "\x1B[36m"
# define RESET  "\x1B[0m"

void error(int errCode) {
	if (errCode == 3)
		std::cout << CYN"Error: empty file\n"RESET;
	exit(errCode);
}

void writeFile(std::string &strFile, std::string filename) {

	std::ofstream file(filename.append(".replace"));
	if (!file)
		error(4);
	file << strFile;
}

void readFile(std::string &strFile, char *filename) {
	char c;

	std::ifstream fileIn(filename); 	//поток для чтения из файла
	if (!fileIn)
		error(2);
	while ((c = fileIn.get()) != EOF) { //whole file in string
		strFile.push_back(c); 			//добавить символ в конец
	}
	fileIn.close();
	if (strFile.length() == 0)
		error(3);
}

void replaceStrings(std::string &strFile, const std::string& s1, const std::string& s2)
{
	for (int i = 0; (i = strFile.find(s1, i)) != -1;) //ищет начало вхождения и возвршает индекс вхождения
	{
		strFile.erase(i, s1.length());  //чистит с какого индекса и сколлько чистить
		strFile.insert(i, CYN);			//вставляем с какого индекса какую строку
		i += strlen(CYN);				//проматиываем индекс на длину вставленной строки
		strFile.insert(i, s2);
		i += s2.length();
		strFile.insert(i, RESET);
		i += strlen(RESET);
	}
}

int main(int ac, char** av)
{
	//reading file in string
	std::string strFile;
	readFile(strFile, av[1]);

	//replace strings in strFile
	replaceStrings(strFile, av[2], av[3]);

	//write string to file
	writeFile(strFile, av[1]);

	return 0;
}