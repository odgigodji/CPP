//
// Created by Nelson Amerei on 26.07.21.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP
#include <iostream>

# define RED    "\x1B[31m"
# define RESET  "\x1B[0m"

template <class T>
class Array {
private:
	T       *_arr;
	size_t  _size;

public:
	Array() : _size(0), _arr(new T[0]) {
		std::cout << "+Array() size: " << _size << " arr: " << _arr << std::endl;
	}

	Array(unsigned int n) :  _arr(new T[n]), _size(n) {
		std::cout << "+Array(n) size: " << _size << " _arr: ";
		std::cout << _arr << "_arr[0]: " << _arr[0] << std::endl;
	}

	~Array() {
		delete[] _arr;
		std::cout << "~Array()" << std::endl;
	};

	Array<T>(const Array<T> &origin) {
		*this = origin;
//		std::cout << "check1.9 \n";
//		if (_arr[0]) {
//			std::cout << "check2.0 \n";
//			delete[] _arr;
////			_array = NULL;
//			std::cout << _arr[1] << std::endl;
//		}
//		std::cout << "check2.1 \n";
//		_size = origin._size;
//		_arr = new T[_size];
//		for (unsigned int i = 0; i < _size; ++i) {
//			_arr[i] = origin._arr[i];
//		}
	}

	Array<T> &operator=(const Array<T> &rhs) {
		std::cout << "check2 \n";
		std::cout << "_size " << _size << " _arr " << _arr << " _arr[0] " << _arr[0] << std::endl;
		if (this == &rhs) {
			return *this;
		}
		if (_arr[0]) {
			delete[] _arr;
////			_arr = NULL;
		}
		_size = rhs._size;
		_arr = new T[rhs._size];
		for (unsigned int i = 0; i < _size; ++i) {
			_arr[i] = rhs._arr[i];
		}
		return *this;
	}

	class OutOfLimit : public std::exception {
		virtual const char* what() const throw() {
			return (RED"Out of limits"RESET);
		}
	};

	T &operator[](const unsigned int idx) {
		if (idx >= 0 && idx < _size) { return _arr[idx]; }
		throw OutOfLimit();
	}

	T *get_array() const;

	size_t size() const ;
};

template <typename T>
size_t Array<T>::size() const { return _size; }

template <typename T>
T *Array<T>::get_array() const {
	return _arr;
}


#endif //EX02_ARRAY_HPP
