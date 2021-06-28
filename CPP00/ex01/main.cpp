/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 15:18:19 by namerei           #+#    #+#             */
/*   Updated: 2021/06/27 15:18:21 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void search(char *av) {
	std::cout << "search\n";
}

int main(int ac, char **av) {
	PhoneBook a;
	a.print();
//	Contact a1;
//	a1.print();

	return (0);
}


//	Contact first;
//	first.print();

//	Contact vasya;
//	if (ac == 2) {
//		if (!strcmp(av[1], "EXIT"))
//				exit(0);
//		if (!strcmp(av[1], "ADD")) {
//			Contact first;
//			first.print();
//		}
//		if (!strcmp(av[1], "SEARCH"))
//			search(av[1]);
//	}