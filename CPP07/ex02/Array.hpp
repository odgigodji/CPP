//
// Created by Nelson Amerei on 26.07.21.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP
#include <iostream>

# define RED    "\x1B[31m"
# define RESET  "\x1B[0m"

//template <class T>
//class Array {
//public:
//	T       *_arr;
//	size_t  _size;
//
//public:
//	Array() : _arr(), _size(0) {
////		std::cout << "+Array() size: " << _size << " arr: " << _arr << std::endl;
//	}
//
//	Array(unsigned int n) : _arr(), _size(n) {
//		if (_size != 0) { _arr = new T[_size]; }
////		std::cout << "+Array(n) size: " << _size << " _arr: ";
////		std::cout << _arr << "_arr[0]: " << _arr[0] << std::endl;
//	}
//
//	~Array() {
//		if (_arr[0]) {
////			std::cout << "-del call" << std::endl;
//			delete[] _arr;
//			_arr = NULL;
//		}
//
//		std::cout << "~Array()" << std::endl;
//	};
//
////	Array<T>(const Array<T> &origin) {
////		*this = origin;
//
////		std::cout << "check1.9 \n";
////		if (_arr[0]) {
////			std::cout << "check2.0 \n";
////			delete[] _arr;
//////			_array = NULL;
////			std::cout << _arr[1] << std::endl;
////		}
////		std::cout << "check2.1 \n";
////		_size = origin._size;
////		_arr = new T[_size];
////		for (unsigned int i = 0; i < _size; ++i) {
////			_arr[i] = origin._arr[i];
////		}
////	}
//
//	Array(const Array& copy)
//	{
//		this->_arr = new T[copy.size()]();
//		this->_size = copy.size();
//		for (unsigned int i = 0; i < this->size(); i++)
//			this->_arr[i] = copy._arr[i];
//	};
////
//
////	Array &operator=(const Array& op)
////	{
////		std::cout << "=:" << std::endl;
////		if (this == &op)
////			return (*this);
////		if (this->_arr[0]) {
////			delete[] _arr;
////			_arr = NULL;
////		}
////		this->_arr = new T[op.size()]();
////		this->_size = op.size();
////		for (int i = 0; i < this->size(); i++)
////			this->_arr[i] = op._arr[i];
////		return (*this);
////	};
//
//
//////MyClass<T>& operator+=(const MyClass<T>& classObj)
//	Array<T> &operator=( Array<T>  &rhs) {
//		std::cout << "operator =: \n";
//		std::cout << "_size " << _size;
//		std::cout << " _arr " << _arr << std::endl;
//
////		if (_arr) {
////			std::cout << "del call " << std::endl;
//			delete[] _arr;
//////			_arr = NULL;
////		}
//		_size = rhs._size;
//		_arr = new T[rhs._size];
//		for (unsigned int i = 0; i < _size; ++i) {
//			_arr[i] = rhs._arr[i];
//		}
//		return *this;
//	}
//


//
//	size_t size() const { return (_size); }
//};


template<class T>
class Array
{
private:
	T       *_arr;
	size_t  _size;

public:
	Array() : _arr(new T[0]()), _size(0) {
		std::cout << "+Array() size: " << _size << " arr: " << _arr << std::endl;
	} ;
	Array(unsigned int n) : _arr(new T[n]()), _size(n) {} ;

	Array(const Array& origin)
	{
		_arr = new T[origin.size()]();
		_size = origin.size();
		for (unsigned int i = 0; i < size(); i++)
			_arr[i] = origin._arr[i];
	};

	~Array() {
		delete [] _arr;
	};

	Array &operator=(const Array& origin)
	{
		if (this == &origin)
			return (*this);
		if (this->_arr) { delete[] _arr; }
		this->_arr = new T[origin.size()]();
		this->_size = origin.size();
		for (unsigned int i = 0; i < this->size(); i++)
			this->_arr[i] = origin._arr[i];
		return (*this);
	};


	T &operator[](const unsigned int idx) {
		if (idx >= 0 && idx < _size) { return _arr[idx]; }
		throw OutOfLimit();
	}

	class OutOfLimit : public std::exception {
		virtual const char* what() const throw() {
			return (RED"Out of limits"RESET);
		}
	};

	unsigned int  size(void) const { return (_size); }
};

#endif //EX02_ARRAY_HPP
