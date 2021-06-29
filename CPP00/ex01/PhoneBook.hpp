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
//#include "Contact.hpp"

# define BOOK_SIZE	8

class PhoneBook {
public:
	PhoneBook();
	void create();
//	void print();
	void printBook() const;

private:
	Contact 	cont[BOOK_SIZE];
	std::string cmd;
	int 		position;
	int			addCounter;

	void addContact();
	void search();
	void setCmd();
};

#endif //TEST_PHONEBOOK_H
