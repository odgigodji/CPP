//
// Created by Nelson Amerei on 24.07.21.
//

#ifndef EX00_CASTING_HPP
#define EX00_CASTING_HPP
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>

# define RED    "\x1B[31m"
# define RESET  "\x1B[0m"

class Convert {
private:
	std::string _string;
	int         _int;
	char        _char;
	float       _float;
	double      _double;

	Convert();
public:
	Convert(const std::string str);
	Convert(const Convert &i);
	Convert &operator=(const Convert &rhs);
	~Convert();

	void convertToInt();
	void printInt();

	void convertToChar();
	void printChar();

	void convertToFloat();
	void printFloat();

	void convertToDouble();
	void printDouble();

//getters and ssetters:
	void set_string(const std::string &_string);
	void set_int(int _int);
	void set_char(char _char);
	void set_float(float _float);
	void set_double(double _double);

	const std::string &get_string() const;
	int get_int() const;
	char get_char() const;
	float get_float() const;
	double get_double() const;
};

#endif //EX00_CASTING_HPP
