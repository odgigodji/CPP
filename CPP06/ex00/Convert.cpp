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
//	std::cout << "string lengt is " << get_string().length() << std::endl;
	if (get_string().length() < 2 && !isdigit(get_string()[0])) { //if just char
		set_char(static_cast<char>(get_string()[0]));
	}
	//if num in string
	else {
		set_char(static_cast<char>(atoi(get_string().c_str())));
	}
//	else { set_char(static_cast<char>(-1)); }
	if (static_cast<int>(get_char()) <= 32 || static_cast<int>(get_char()) >= 127) {
		throw "Non displayable"; }
}
void Convert::printChar() {
	std::cout << "char: ";

	try {
		convertToChar();
		std::cout << get_char();
	}
	catch (const char *e) { std::cout << RED << e << RESET; }

	std::cout << std::endl;
}

//FLOAT:
void Convert::convertToFloat() {
	set_float(static_cast<float>(atof(_string.c_str())));
	if (_float == -1 && _string != "-1") { throw ("too long float"); }
	if (_float == 0 && _string != "0") { throw ("impossible"); }
}
void Convert::printFloat() {
	std::cout << "float: ";
	try {
		convertToFloat();
		std::cout.precision(7);
		std::cout << static_cast<float>(get_float());
	}
	catch (const char *e) { std::cout << RED << e << RESET; }
	std::cout << std::endl;
}

//DOUBLE:
void Convert::convertToDouble() {
	set_double(atof(_string.c_str()));
	if (_double == -1 && _string != "-1") { throw ("too long double"); }
	if (_double == 0 && _string != "0") { throw ("impossible"); }
}
void Convert::printDouble() {
	std::cout << "double: ";
	try {
		convertToDouble();
		std::cout.precision(7);
		std::cout << get_double();
	}
	catch (const char *e) { std::cout << RED << e << RESET; }
	std::cout << std::endl;
}

//getters:
const std::string &Convert::get_string() const { return _string; }
int Convert::get_int() const { return _int; }
char Convert::get_char() const { return _char; }
float Convert::get_float() const { return _float; }
double Convert::get_double() const { return _double; }

//setters:
void Convert::set_string(const std::string &_string) { Convert::_string = _string; }
void Convert::set_int(int _int) { Convert::_int = _int; }
void Convert::set_char(char _char) { Convert::_char = _char; }
void Convert::set_float(float _float) { Convert::_float = _float; }
void Convert::set_double(double _double) { Convert::_double = _double; }






