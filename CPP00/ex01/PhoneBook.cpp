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
#include "PhoneBook.hpp"

//#include "PhoneBook.hpp"


PhoneBook::PhoneBook() {
	this->position = 0;
	addCounter = 0;
}

void PhoneBook::addContact() {
	cont[position].add();
//	std::cout << "position is " << position << std::endl;
	position = (position == BOOK_SIZE - 1) ? 0 : position + 1;
//	std::cout << "position after ++ is " << position << std::endl;
	addCounter = (addCounter == BOOK_SIZE) ? addCounter : addCounter + 1;
}

//void PhoneBook::inputCommand() {
//	std::cin >> cmd;
//	//do all shit
//	while (!std::strcmp(cmd.c_str(), "ADD")) {
//		std::cout << "add command is loading...\n";
//		std::cin >> cmd;
//	}
//	std::cout << cmd << std::endl;
//}

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
	std::cout << MAG"Enter command: "RESET; //(ADD, SEARCH or EXIT)
//	std::cin >> PhoneBook::cmd;
	if (std::getline(std::cin, cmd).eof())
		exit(1);
}

void PhoneBook::search() {
	std::cout << CYN"|" << std::setw(10) << "index"  << "|";
	std::cout << std::setw(10) << "first name"  << "|";
	std::cout << std::setw(10) << "last name"  << "|";
	std::cout << std::setw(10) << "nickname"  << "|" << std::endl;

	for (int i = 0;i < addCounter; ++i) {
//		std::cout << "|" << std::setw(10) <<
//		cont[i].getMFirstName().substr(0, 9).append(".") << "|";
//		std::cout << i << std::endl;
//		std::cout << !cont[i].isEmpty1() << std::endl;
		cont[i].print();
//		std::cout << "check1\n";
	}
}

void PhoneBook::printBook() const {


}
