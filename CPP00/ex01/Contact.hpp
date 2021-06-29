/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:34:35 by namerei           #+#    #+#             */
/*   Updated: 2021/06/27 20:34:37 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <ostream>
#include "header.h"

class Contact {

private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_number;
	std::string m_secret;

public:
	Contact();
	void add();
	bool ContIsEmpty();

//SETTERS:
	void setMFirstName();
	void setMLastName();
	void setMNickname();
	void setMNumber();
	void setMSecret();

//PRINTS
	void print() const;
	void printMFirstName() const;
	void printMlastName() const;
	void printMnickName() const;
};

#endif //CONTACT_HPP
