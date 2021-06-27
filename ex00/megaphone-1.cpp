#include <iostream>                         // для оператора cout
#include <cctype>                           // для функции toupper
 
int main(int ac, char **av)
{
  int ix = 1;                               // индекс символов строки
  if (ac == 1) {
	  std::cout << "\342\230\272" << "\t";
	  std::cout << "SHHH SHHH..." << "\t";
	  std::cout << "\342\230\272" << "\n";
  }
 
  for(int ix = 1; av[ix]; ix++)
  {
	 for(int i = 0; av[ix][i]; i++) { 
    	std::cout << (char)toupper(av[ix][i]);
	 }
	std::cout << " ";
	if (av[ix + 1] == NULL) 
		std::cout << "\n";
  }
  return 0;
}
