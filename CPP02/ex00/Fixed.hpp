//
// Created by Nelson Amerei on 7/5/21.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP
#include 		<iostream>
# define GRN 	"\x1b[32m"
# define BLU 	"\x1b[34m"
# define CYN 	"\x1b[36m"
# define MAG 	"\x1b[35m"
# define RESET	"\x1b[0m"


class Fixed {
private:
	int					_rawBits;
	static const int	_fractionalBits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed	&operator=(const Fixed &fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif //EX00_FIXED_HPP
