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
	void print() const;

	const std::string &getMFirstName() const;
	void setMFirstName(const std::string &mFirstName);
//	const std::string &getMLastName() const;
//	void setMLastName(const std::string &mLastName);
//	const std::string &getMNickname() const;
//	void setMNickname(const std::string &mNickname);
//	const std::string &getMNumber() const;
//	void setMNumber(const std::string &mNumber);
//	const std::string &getMSecret() const;
//	void setMSecret(const std::string &mSecret);
	bool isEmpty() const;

//	Contact(const std::string &mFirstName);

	void setIsEmpty(bool isEmpty);

private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_number;
	std::string m_secret;
	bool 		is_empty;
};

#endif //CONTACT_HPP
