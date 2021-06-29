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
#define BOOK_SIZE	8
#include "header.h"

class PhoneBook {
private:
	Contact 	cont[BOOK_SIZE];
	std::string cmd;
	int 		position;
	int			addCounter;

public:
	void setCmd();
	PhoneBook();
	void addContact();
	void search();
	void create();
};

#endif //TEST_PHONEBOOK_H
