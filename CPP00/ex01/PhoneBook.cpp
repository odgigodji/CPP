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


PhoneBook::PhoneBook() : position(0) {}

void PhoneBook::addContact() {
	if (position == 2) {
		position = 0;
	}
	cont[position++].add();
	cont[position - 1].print();
//	for(int i = 0; i < 2; ++i) { //8
//		this->cont[i].add();
//		cont[i].print();
//	}
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
	while(1) {
		std::cin >> cmd;
		if (!std::strcmp(cmd.c_str(), "ADD"))
			std::cout << "add cmd is start" << std::endl;
		else if (!std::strcmp(cmd.c_str(), "SEARCH"))
			std::cout << "search cmd is start" << std::endl;
		else if (!std::strcmp(cmd.c_str(), "EXIT")) {
			std::cout << "search cmd is start" << std::endl;
			exit(1);
		}
		else
			std::cout << "other cmd\n";
	}
}

const std::string &PhoneBook::getCmd() const {
	return cmd;
}

