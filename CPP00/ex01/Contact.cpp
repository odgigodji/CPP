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

Contact::Contact() : is_empty(false){
	std::cout << "First name: ";
	std::cin >> this->m_firstName ;

	std::cout << "Last name: ";
	std::cin >> this->m_lastName ;

//	std::cout << "Nickname: ";
//	std::cin >> this->m_nickname ;
//
//	std::cout << "Phone number: ";
//	std::cin >> this->m_number ;
//
//	std::cout << "Secret: ";
//	std::cin >> this->m_secret ;
}



//Contact::~Contact( void ) {
//	std::cout << "Destructor called" << std::endl;
//	return ;
//}

void Contact::print() const {
	std::cout << this->m_firstName << std::endl;
	std::cout << this->m_lastName << std::endl;
//	std::cout << this->m_nickname << std::endl;
//	std::cout << this->m_number << std::endl;
//	std::cout << this->m_secret << std::endl;
}

const std::string &Contact::getMFirstName() const {return m_firstName;}
void Contact::setMFirstName(const std::string &mFirstName) {m_firstName = mFirstName;}

//const std::string &Contact::getMLastName() const {return m_lastName;}
//void Contact::setMLastName(const std::string &mLastName) {m_lastName = mLastName;}
//
//const std::string &Contact::getMNickname() const {return m_nickname;}
//void Contact::setMNickname(const std::string &mNickname) {m_nickname = mNickname;}
//
//const std::string &Contact::getMNumber() const {return m_number;}
//void Contact::setMNumber(const std::string &mNumber) {m_number = mNumber;}
//
//const std::string &Contact::getMSecret() const {return m_secret;}
//void Contact::setMSecret(const std::string &mSecret) {m_secret = mSecret;}
//
bool Contact::isEmpty() const {return is_empty;}
void Contact::setIsEmpty(bool isEmpty) {is_empty = isEmpty;}

