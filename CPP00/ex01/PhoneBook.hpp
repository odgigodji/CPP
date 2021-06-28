/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:43:54 by namerei           #+#    #+#             */
/*   Updated: 2021/06/28 18:43:55 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_PHONEBOOK_H
#define TEST_PHONEBOOK_H
#include "header.h"

class PhoneBook {
public:
	PhoneBook();
	void create();
	const std::string &getCmd() const;

private:
	Contact cont[2]; //8
	int 	position;
	std::string cmd;

	void addContact() ;
};

#endif //TEST_PHONEBOOK_H
