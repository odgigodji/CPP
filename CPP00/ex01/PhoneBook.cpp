/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:43:49 by namerei           #+#    #+#             */
/*   Updated: 2021/06/28 18:43:50 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

PhoneBook::PhoneBook() {
	this->position = 0;
	addCounter = 0;
}

void PhoneBook::addContact() {
	cont[position].add();
	position = (cont[position].ContIsEmpty()) ? position - 1 : position;
	position = (position == BOOK_SIZE - 1) ? 0 : position + 1;
	addCounter = (addCounter == BOOK_SIZE) ? addCounter : addCounter + 1;
}

void PhoneBook::create() {
	while(true) {
		setCmd();
		if (!std::strcmp(cmd.c_str(), "EXIT")) { exit(1); }
		else if (!std::strcmp(cmd.c_str(), "ADD")) { addContact(); }
		else if (!std::strcmp(cmd.c_str(), "SEARCH")) { search(); }
		else {
			std::cout << RED"Command not exist.\n"RESET;
			std::cout << YEL"ADD - add contact to Phonebook.\n";
			std::cout << "SEARCH - show available contacts.\n";
			std::cout << "EXIT - exit program.\n"RESET;
		}
	}
}

void PhoneBook::setCmd() {
	std::cout << MAG"Enter command: "RESET;
	if (std::getline(std::cin, cmd).eof())
		exit(1);
}

void PhoneBook::search() {
	std::cout << CYN"|" << std::setw(10) << "index"  << "|";
	std::cout << std::setw(10) << "first name"  << "|";
	std::cout << std::setw(10) << "last name"  << "|";
	std::cout << std::setw(10) << "nickname"  << "|" << std::endl;

	for (int i = 0;i < BOOK_SIZE; ++i) {
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		cont[i].print();
	}
}
