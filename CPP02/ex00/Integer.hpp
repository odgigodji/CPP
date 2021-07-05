//
// Created by Nelson Amerei on 7/5/21.
//

#ifndef EX00_INTEGER_HPP
#define EX00_INTEGER_HPP
#include <iostream>

class Integer {
public:
	Integer(int const n);
	~Integer( void );

	int getValue( void ) const;

	Integer &operator-( Integer const & rhs);
	Integer	 operator+( Integer const & rhs) const;

private:
	int _n;
};

//std::ostream & operator<<(std::w)

#endif //EX00_INTEGER_HPP
