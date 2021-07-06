//
// Created by Nelson Amerei on 7/5/21.
//

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

//constructors:
Fixed::Fixed() { //+
	_rawBits = 0;
	std::cout << MAG << "Default constructor called" << RESET << std::endl;
}
//destructor
Fixed::~Fixed() { //+
	std::cout << MAG << "Destructor called" << RESET << std::endl;
}
// a copy constructor
Fixed::Fixed(const Fixed &fixedCopy) {  //+
	std::cout << CYN << "Copy constructor called" << RESET << std::endl;
	_rawBits = fixedCopy.getRawBits();
}
// an assignation operator overload
Fixed	&Fixed::operator=(const Fixed &fixed) {
	std::cout << CYN << "Assignation operator called" << RESET << std::endl;
	_rawBits = fixed.getRawBits();
	return *this;
}
Fixed::Fixed(const int intBits) { //+
	std::cout << GRN << "Int constructor called" << RESET << std::endl;
	_rawBits = intBits << _fractionalBits;
}

/*
To convert from floating-point to fixed-point, we follow this algorithm:
1. Calculate x = floating_input * 2^(fractional_bits)
2. Round x to the nearest whole number
3. Store the rounded x in an integer
*/

Fixed::Fixed(const float floatBits) { //+
	std::cout << GRN << "Float constructor called" << RESET << std::endl;
	int power(1);
	for (int i = 0; i < _fractionalBits; i++)
		power *= 2;
	_rawBits = std::roundf(floatBits * power);
}

//Converting from fixed-point to floating-point is straightforward.
//Take the rawBits and divide it by fractionalBits
float Fixed::toFloat(void) const {
	int power(1);
	for (int i(0); i < _fractionalBits; i++)
		power *= 2;
	return (float)_rawBits / (float)power;
}
int Fixed::toInt(void) const {
	return _rawBits >> _fractionalBits;
}

std::ostream	&operator<<(std::ostream &oS, const Fixed &fixed) {
	oS << fixed.toFloat();
	return oS;
}

//getters and setters:
int Fixed::getRawBits(void) const {
	return _rawBits;
}
void    Fixed::setRawBits(const int raw) {
	_rawBits = raw;
}
