//
// Created by Nelson Amerei on 7/5/21.
//

#include "Fixed.hpp"

//constructors:
Fixed::Fixed() {
	_rawBits = 0;
	std::cout << GRN << "Default constructor called" << RESET << std::endl;
}
//destructor
Fixed::~Fixed() {
	std::cout << MAG << "Destructor called" << RESET << std::endl;
}
// a copy constructor
Fixed::Fixed(const Fixed &fixed) {
	std::cout << GRN << "Copy constructor called" << RESET << std::endl;
	_rawBits = fixed.getRawBits();
}
// an assignation operator overload
Fixed	&Fixed::operator=(const Fixed &fixed) {
	std::cout << CYN << "Assignation operator called" << RESET << std::endl;
	_rawBits = fixed.getRawBits();
	return *this;
}

//getters and setters:
int Fixed::getRawBits(void) const {
	std::cout << BLU << "getRawBits member function called" << RESET << std::endl;
	return this->_rawBits;
}
void    Fixed::setRawBits(const int raw) {
	std::cout << BLU << "setRawBits member function called" << RESET << std::endl;
	_rawBits = raw;
}

