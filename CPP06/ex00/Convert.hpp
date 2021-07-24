//
// Created by Nelson Amerei on 24.07.21.
//

#ifndef EX00_CASTING_HPP
#define EX00_CASTING_HPP
#include <iostream>
#include <cstdlib>
#include <cmath>

class Convert {
private:
	std::string _string;
	int         _int;
	char        _char;
	float       _float;
	double      _double;

	Convert();
	const std::string &get_string() const;
public:
	Convert(const std::string str);
	Convert(const Convert &i);
	Convert &operator=(const Convert &rhs);
	~Convert();

	void convertToChar();
	void pringInt() const;

	int ConvertToInt();
};


#endif //EX00_CASTING_HPP
