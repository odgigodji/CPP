//
// Created by Nelson Amerei on 7/5/21.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP
#include 		<iostream>
#include 		<cmath>
# define GRN 	"\x1b[32m"
# define BLU 	"\x1b[34m"
# define CYN 	"\x1b[36m"
# define MAG 	"\x1b[35m"
# define RESET	"\x1b[0m"


class Fixed {
private:
	int					_rawBits;
	static const int 	_fractionalBits;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int 	intBits);
	Fixed(const float 	floatBits);
	float toFloat() const;
	int toInt() const;
//overload operators:
	Fixed	&operator=(const Fixed &fixedCopy);
	Fixed 	&operator++();
	Fixed 	operator++(int);
	Fixed 	&operator--();
	Fixed 	operator--(int);
//getters and setters
	int		getRawBits(void) const;
	void	setRawBits(int const rawBits);

//min and max
	static Fixed min(const Fixed &lhs, const Fixed &rhs);
	static Fixed max(const Fixed &lhs, const Fixed &rhs);
};

std::ostream &operator<<(std::ostream &oS, const Fixed  &fixed);
bool operator>(const Fixed &f1, const Fixed &f2);
bool operator<(const Fixed &f1, const Fixed &f2);
bool operator>=(const Fixed &f1, const Fixed &f2);
bool operator<=(const Fixed &f1, const Fixed &f2);
bool operator==(const Fixed &f1, const Fixed &f2);
bool operator!=(const Fixed &f1, const Fixed &f2);

float operator+(const Fixed &f1, const Fixed &f2);
float operator-(const Fixed &f1, const Fixed &f2);
float operator*(const Fixed &f1, const Fixed &f2);
float operator/(const Fixed &f1, const Fixed &f2);


#endif //EX00_FIXED_HPP
