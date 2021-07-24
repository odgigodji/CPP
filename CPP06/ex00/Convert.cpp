//
// Created by Nelson Amerei on 24.07.21.
//

#include "Convert.hpp"

Convert::Convert(const std::string str) {
	_string = str;
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

const std::string &Convert::get_string() const {
	return _string;
}

int Convert::ConvertToInt() {
	int i;
	i = atoi(_string.c_str());

	return i;
}

void Convert::convertToChar() {
	char c;
	c = _string.c_str()[0];

}

void Convert::pringInt() const {

}
