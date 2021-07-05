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
	Fixed(const int 	intBits);
	Fixed(const float 	floatBits);
	Fixed(const Fixed &fixed);
	Fixed	&operator=(const Fixed &fixedCopy);
	//methods for converting types
	float toFloat( void );
	int toInt( void ) const;
	//getters and setters
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

// an overload to the '<<' operator that inserts a floating point representation
// of the pixed point value into the parameter output stream.
std::ostream &operator<<(std::ostream &oS, Fixed fixed);

#endif //EX00_FIXED_HPP
