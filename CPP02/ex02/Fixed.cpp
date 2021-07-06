//
// Created by Nelson Amerei on 7/5/21.
//

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

//constructors:
Fixed::Fixed() {
	_rawBits = 0;
//	std::cout << MAG << "Default constructor called" << RESET << std::endl;
}
//destructor
Fixed::~Fixed() {
//	std::cout << MAG << "Destructor called" << RESET << std::endl;
}
// a copy constructor
Fixed::Fixed(const Fixed &fixedCopy) {
//	std::cout << CYN << "Copy constructor called" << RESET << std::endl;
	_rawBits = fixedCopy.getRawBits();
}
// an assignation operator overload
Fixed	&Fixed::operator=(const Fixed &fixed) {
//	std::cout << CYN << "Assignation operator called" << RESET << std::endl;
	_rawBits = fixed.getRawBits();
	return *this;
}
Fixed::Fixed(const int intBits) {
//	std::cout << GRN << "Int constructor called" << RESET << std::endl;
	_rawBits = intBits << _fractionalBits;
}

Fixed::Fixed(const float floatBits) {
//	std::cout << GRN << "Float constructor called" << RESET << std::endl;
	int power(1);
	for (int i = 0; i < _fractionalBits; i++)
		power *= 2;
	_rawBits = std::roundf(floatBits * power);
}

float Fixed::toFloat(void) const {
	return (float)_rawBits / (float)(1 << _fractionalBits);
}
int Fixed::toInt(void) const {
	return _rawBits >> _fractionalBits;
}

//getters and setters:
int Fixed::getRawBits(void) const {
	return _rawBits;
}
void    Fixed::setRawBits(const int raw) {
	_rawBits = raw;
}

//overloads class operators:
Fixed &Fixed::operator++() {
	_rawBits++;
	return *this;
}
Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	_rawBits++;
	return tmp;
}
Fixed &Fixed::operator--() {
	_rawBits--;
	return *this;
}
Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	_rawBits--;
	return tmp;
}

Fixed Fixed::min(const Fixed &f1, const Fixed &f2) {
	return (f1 > f2) ? f2 : f1;
}
Fixed Fixed::max(const Fixed &f1, const Fixed &f2) {
	return (f1 > f2) ? f1 : f2;
}

//overloads global
std::ostream &operator<<(std::ostream &oS, const Fixed &fixed) {
	return oS << fixed.toFloat();
}

bool operator>(const Fixed &f1, const Fixed &f2) {
	return f2 < f1;
}
bool operator<(const Fixed &f1, const Fixed &f2) {
	return f1.getRawBits() < f2.getRawBits();
}
bool operator>=(const Fixed &f1, const Fixed &f2) {
	return !(f1 < f2);
}
bool operator<=(const Fixed &f1, const Fixed &f2) {
	return !(f2 < f1);
}
bool operator==(const Fixed &f1, const Fixed &f2) {
	return f1.getRawBits() == f2.getRawBits();
}
bool operator!=(const Fixed &f1, const Fixed &f2) {
	return !(f2 == f1);
}

float operator+(const Fixed &f1, const Fixed &f2) {
	return f1.toFloat() + f2.toFloat();
}
float operator-(const Fixed &f1, const Fixed &f2) {
	return f1.toFloat() - f2.toFloat();
}
float operator*(const Fixed &f1, const Fixed &f2) {
	return f1.toFloat() * f2.toFloat();
}
float operator/(const Fixed &f1, const Fixed &f2) {
	return f1.toFloat() / f2.toFloat();
}





