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
#include <cstring>
#include <sstream>
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

void Contact::print() const {
	std::cout << "|" << std::setw(10)
	<< getMFirstName().substr(0, 9).append(".") << "|";
}

const std::string &Contact::getMFirstName() const {
	if (m_firstName.length() < 10)
		return m_firstName;
	else { return m_firstName.substr(0, 9).append("."); }
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

