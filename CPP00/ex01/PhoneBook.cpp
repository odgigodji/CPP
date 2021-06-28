#include "header.h"

//void PhoneBook::makeContact() {
//	std::cout << "makeContact" << std::endl;
//
//	for(int i = 0; i < 8; ++i) {
//		std::string tmp;
//		this->cont[i].setMFirstName(takeInput());
//		this->cont[i].print();
//	}
//}

//std::string PhoneBook::takeInput() {
//	std::string tmp;
//	std::cin >> tmp;
//	return tmp;
//}
PhoneBook::PhoneBook() {

}

void PhoneBook::print() const {
	for(int i = 0; i < 8; ++i) {
		this->cont[i];
		cont[i].print();
	}
}
//const Contact &PhoneBook::getCont1() const {
//	return cont1;
//}
//void PhoneBook::setCont1(const Contact &cont) {
//	PhoneBook::cont1 = cont;
//}
//
//const Contact &PhoneBook::getCont2() const {
//	return cont2;
//}
//void PhoneBook::setCont2(const Contact &cont) {
//	PhoneBook::cont2 = cont;
//}

