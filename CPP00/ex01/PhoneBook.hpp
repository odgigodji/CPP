#ifndef TEST_PHONEBOOK_H
#define TEST_PHONEBOOK_H
#include "header.h"

class PhoneBook {
public:
	PhoneBook();

	void print() const ;
//	PhoneBook(const Contact &cont1);

//	void makeContact();

//	const Contact *getCont() const;

//	static std::string takeInput();

private:
	Contact cont[8];
	int 	position;
//	Contact cont2;
public:
//	const Contact &getCont1() const;
//
//	void setCont1(const Contact &cont1);
//
//	const Contact &getCont2() const;
//
//	void setCont2(const Contact &cont2);
};

#endif //TEST_PHONEBOOK_H
