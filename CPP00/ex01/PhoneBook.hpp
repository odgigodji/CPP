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
	int 		_index;

public:
	PhoneBook();
	void setCmd();
	void addContact();
	void search();
	void create();
	bool isCorrectLine();
//	bool isCorrectIndex(const std::string &str);
};

#endif //TEST_PHONEBOOK_H
