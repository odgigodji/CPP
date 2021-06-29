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
#include "header.h"

class Contact {

public:

	Contact();
	void add();
	void print() const;
//	bool notEmpty() const;
//	void setIsEmpty(bool isEmpty);


private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_number;
	std::string m_secret;
//	bool 		isEmpty;

public:
	void setMFirstName();
	const std::string &getMFirstName() const;

//SETTERS:
	void setMLastName();
	void setMNickname();
	void setMNumber();
	void setMSecret();

};

#endif //CONTACT_HPP
