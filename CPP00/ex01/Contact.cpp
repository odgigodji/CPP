/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:34:26 by namerei           #+#    #+#             */
/*   Updated: 2021/06/27 20:34:30 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


Contact::Contact() {}

void Contact::add() {
	std::cout << BLU"First name: "RESET;
	setMFirstName();

	std::cout << BLU"Last name: "RESET;
	setMLastName();

	std::cout << BLU"Nickname: "RESET;
	setMNickname();

	std::cout << BLU"Phone number: "RESET;
	setMNumber();

	std::cout << BLU"Secret: "RESET;
	setMSecret();
}

//main print
void Contact::print() const {

	printMFirstName();
	printMlastName();
	printMnickName();
//	std::cout  << std::setw(10) << getMLastName() << "|";
//	std::cout  << std::setw(10) << getMNickname() << "|\n";
}

//PRINTS:
void Contact::printMFirstName() const {
	std::cout  << std::setw(10);
	if (m_firstName.length() < 10) {
		std::cout << m_firstName;
	} else {
		std::cout << m_firstName.substr(0, 9).append(".");
	}
	std::cout << "|";
}
void Contact::printMlastName() const {
	std::cout  << std::setw(10);
	if (m_lastName.length() < 10) {
		std::cout << m_lastName;
	} else {
		std::cout << m_lastName.substr(0, 9).append(".");
	}
	std::cout << "|";
}
void Contact::printMnickName() const {
	std::cout  << std::setw(10);
	if (m_nickname.length() < 10) {
		std::cout << m_nickname;
	} else {
		std::cout << m_nickname.substr(0, 9).append(".");
	}
	std::cout << "|" << std::endl;
}

//SETTERS:

void Contact::setMFirstName() {
	if (std::getline(std::cin, m_firstName).eof())
			exit(1);
}
void Contact::setMLastName() {
	if (std::getline(std::cin, m_lastName).eof())
		exit(1);
}
void Contact::setMNickname() {
	if (std::getline(std::cin, m_nickname).eof())
		exit(1);
}
void Contact::setMNumber() {
	if (std::getline(std::cin, m_number).eof())
		exit(1);
}
void Contact::setMSecret() {
	if (std::getline(std::cin, m_secret).eof())
		exit(1);
}


