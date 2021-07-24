//
// Created by Nelson Amerei on 24.07.21.
//

#include "Convert.hpp"

Convert::Convert(const std::string str) : _string(str) {}

Convert::Convert(const Convert &i) {
	set_string(i.get_string());
	set_char(i.get_char());
	set_double(i.get_double());
	set_float(i.get_float());
	set_int(i.get_int());
}

Convert &Convert::operator=(const Convert &rhs) {
	set_string(rhs.get_string());
	set_char(rhs.get_char());
	set_double(rhs.get_double());
	set_float(rhs.get_float());
	set_int(rhs.get_int());
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
	if (get_string().length() < 2 && !isdigit(get_string()[0])) { //if just char
		set_char(static_cast<char>(get_string()[0]));
	}
	else { 	//if num in string
		set_char(static_cast<char>(atoi(get_string().c_str())));
	}
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






