//
// Created by Nelson Amerei on 24.07.21.
//

#include "Convert.hpp"

Convert::Convert(const std::string str) {
	_string = str;
//		convertToInt();
}

Convert::Convert(const Convert &i) {
	_string = i._string;
	_char   = i._char;
	_int    = i._int;
	_float  = i._float;
	_double = i._double;
}

Convert &Convert::operator=(const Convert &rhs) {
	_string = rhs._string;
	_char   = rhs._char;
	_int    = rhs._int;
	_float  = rhs._float;
	_double = rhs._double;
	return *this;
}

Convert::~Convert() {}

Convert::Convert() {}

//INT:
void Convert::convertToInt() {
	set_int(atoi(_string.c_str()));
	if (_int == -1 && _string != "-1") { throw ("too long num"); }
	if (_int == 0 && _string != "0") { throw ("impossible"); }
}
void Convert::printInt() {
	std::cout << "int: ";

	try {
		convertToInt();
		std::cout << get_int();
	}
	catch (const char *e) { std::cout << RED << e << RESET; }

	std::cout << std::endl;
}

//CHAR:
void Convert::convertToChar() {
	if (get_string().length() == 2) { //if just char
		set_char(get_string()[0]);
		if (get_char() < 32 || get_char()> 122) { throw "Non displayable"; }
	}
}
void Convert::printChar() {

}

//getters:
const std::string &Convert::get_string() const { return _string; }
int Convert::get_int() const { return _int; }
char Convert::get_char() const { return _char; }
float Convert::get_float() const { return _float; }
double Convert::get_double() const { return _double; }

//setters:
void Convert::set_int(int _int) { Convert::_int = _int; }
void Convert::set_char(char _char) { Convert::_char = _char; }
void Convert::set_float(float _float) { Convert::_float = _float; }
void Convert::set_double(double _double) { Convert::_double = _double; }

