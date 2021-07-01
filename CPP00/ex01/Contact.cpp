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
# include "Contact.hpp"

Contact::Contact() {}

void Contact::add() {
	setMFirstName();
	setMLastName();
	setMNickname();
	setMNumber();
	setMSecret();
}

bool Contact::isEmpty() {
	if (m_firstName.length() + m_nickname.length() +
	m_lastName.length() + m_number.length() + m_secret.length()) {
		return false;
	} else {
		return true;
	}
}

//PRINTS:
void Contact::print() const {
	printMFirstName();
	printMlastName();
	printMnickName();
}

void Contact::printInfo() const {
	std::cout << GRN"Name: "RESET << m_firstName << std::endl;
	std::cout << GRN"Last_name: "RESET << m_lastName << std::endl;
	std::cout << GRN"Nickname: "RESET << m_nickname << std::endl;
	std::cout << GRN"Number: "RESET << m_number << std::endl;
	std::cout << GRN"Darkest_secret 😈: "RESET << m_secret << RESET << std::endl;
}

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
	std::cout << "|"RESET << std::endl;
}

//SETTERS:
void Contact::setMFirstName() {
	std::cout << BLU"First name: "RESET;
	if (std::getline(std::cin, m_firstName).eof())
			exit(1);
}
void Contact::setMLastName() {
	std::cout << BLU"Last name: "RESET;
	if (std::getline(std::cin, m_lastName).eof())
		exit(1);
}
void Contact::setMNickname() {
	std::cout << BLU"Nickname: "RESET;
	if (std::getline(std::cin, m_nickname).eof())
		exit(1);
}
void Contact::setMNumber() {
	std::cout << BLU"Phone number: "RESET;
	if (std::getline(std::cin, m_number).eof())
		exit(1);
}
void Contact::setMSecret() {
	std::cout << BLU"Secret: "RESET;
	if (std::getline(std::cin, m_secret).eof())
		exit(1);
}
