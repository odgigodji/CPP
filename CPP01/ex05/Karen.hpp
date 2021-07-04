//
// Created by Nelson Amerei on 7/4/21.
//

#ifndef EX05_KAREN_HPP
#define EX05_KAREN_HPP
#include <iostream>
# define BLU    "\x1B[34m"
# define RED    "\x1B[31m"
# define YEL	"\x1B[33m"
# define MAG    "\x1B[35m"
# define CYN    "\x1B[36m"
# define RESET  "\x1B[0m"
# define UNDRLN "\x1b[4m"
# define PULSE  "\x1b[5m"

class Karen {
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Karen();
	void complain( std::string level );
};


#endif //EX05_KAREN_HPP
