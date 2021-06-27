#include <iostream>
#include <cstring>

typedef struct	s_user {
	char *firstname;
	char *lastName;
	char *nickname;
	char *number;
	char *darknestSecret;
}				t_user;

void add(char *av, t_user *user) {
	//std::cout << "add\n";
	char res[50];
	std::cout << "Your first name:\n";
	std::cin >> user->firstname ;
	//std::cout << "OOuu cute \342\230\272" << "\n";

	std::cout << "Your second name:\n";
	std::cin >> user->firstname ;

}

void search(char *av) {
	std::cout << "search\n";
}

int main(int ac, char **av) {
	t_user user;
	//std::cin >> res ;
	//std::cout << res << std::endl;
	if (ac == 2) {
		if (!strcmp(av[1], "EXIT"))
				exit(0);
		if (!strcmp(av[1], "ADD"))
			add(av[1], &user);
			std::cout << user.firstname;
			}
		if (!strcmp(av[1], "SEARCH"))
			search(av[1]);
	return (0);
}
