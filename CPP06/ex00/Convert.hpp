//
// Created by Nelson Amerei on 24.07.21.
//

#ifndef EX00_CASTING_HPP
#define EX00_CASTING_HPP
#include <iostream>
#include <cstdlib>
#include <cmath>
# define RED    "\x1B[31m"
# define WTH    "\x1B[38m"
# define GRN    "\x1B[32m"
# define YEL    "\x1B[33m"
# define BLU    "\x1B[34m"
# define MAG    "\x1B[35m"
# define CYN    "\x1B[36m"
# define RESET  "\x1B[0m"


class Convert {
private:
	std::string _string;
	int         _int;
	char        _char;
	float       _float;
	double      _double;
public:
	int get_int() const;

private:

	Convert();
	const std::string &get_string() const;
public:
	Convert(const std::string str);
	Convert(const Convert &i);
	Convert &operator=(const Convert &rhs);
	~Convert();

	void convertToInt();
	void printInt();

	void convertToChar();
	void printChar();

//getters and ssetters:
	void set_int(int _int);
	void set_char(char _char);
	void set_float(float _float);
	void set_double(double _double);
	char get_char() const;
	float get_float() const;
	double get_double() const;
};


#endif //EX00_CASTING_HPP
