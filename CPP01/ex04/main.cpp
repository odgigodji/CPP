#include <iostream>
#include <fstream>
# define CYN    "\x1B[36m"
# define RESET  "\x1B[0m"

void error(int errCode) {
	exit(errCode);
}

void readFile(char *arg, std::string &strFile) {
	char c;

	std::ifstream file(arg); //поток для чтения из файла типо open argv имя файла
	if (!file)
		error(2);
	while ((c = file.get()) != EOF) { //whole file in string
		strFile.push_back(c); //добавить символ в конец
	}
	file.close();
	if (strFile.length() == 0)
		error(3);
}

void replaceStrings(std::string &strFile, const std::string& s1, const std::string& s2)
{
//	int i = 0;
//	while ((i = strFile.find(s1, i)) != -1)
	std::string cyn = CYN;
	std::string reset = RESET;
	for (int i = 0; (i = strFile.find(s1, i)) != -1;) //ищет начало вхождения и возвршает индекс вхождения
	{
		strFile.erase(i, s1.length());  //чистит с какого и сколлько чистить
		strFile.insert(i, cyn);
		i += cyn.length();
		strFile.insert(i, s2);			//вставляем с какого какую строку
		i += s2.length();				//промати=ываем индекс на длину вставленной строки
		strFile.insert(i, reset);
		i += s2.length();
	}
}

int main(int ac, char** av)
{
	//reading file in string
	std::string strFile;
	readFile(av[1], strFile);
	std::cout << strFile;
	//replace strings in filestring
	replaceStrings(strFile, av[2], av[3]);
	//write string to file
	std::cout << strFile;
	//check error if occurs


//
//	return 0;
}