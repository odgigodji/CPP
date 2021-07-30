//
// Created by Nelson Amerei on 26.07.21.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP
#include <iostream>

# define RED    "\x1B[31m"
# define RESET  "\x1B[0m"

template<class T>
class Array
{
private:
	T       *_arr;
	size_t  _size;

public:
	Array() : _arr(new T[0]()), _size(0) {
//		std::cout << "+Array() size: " << _size << " arr: " << _arr << std::endl;
	} ;
	Array(unsigned int n) : _arr(new T[n]()), _size(n) {
//		std::cout << "+Array() size: " << _size << " arr: " << _arr << std::endl;
	} ;

	Array(const Array& origin)
	{
		_size = origin.size();
		_arr = new T[_size];
		for (unsigned int i = 0; i < size(); i++)
			_arr[i] = origin._arr[i];
	};

	~Array() { delete [] _arr; };

	Array &operator=(const Array& rhs)
	{
		if (_arr) { delete[] _arr; }
		_size = rhs.size();
		_arr = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_arr[i] = rhs._arr[i];
		return (*this);
	};

	class OutOfLimit : public std::exception {
		virtual const char* what() const throw() {
			return (RED"Out of limits"RESET);
		}
	};

	T &operator[](const unsigned int idx) {
		if (idx >= 0 && idx < _size) { return _arr[idx]; }
		throw OutOfLimit();
	}

	unsigned int  size(void) const { return (_size); }
};

#endif //EX02_ARRAY_HPP
