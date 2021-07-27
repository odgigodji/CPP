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
	T       *_array;
	size_t  _size;

public:
	Array() : _size(0), _array(NULL) {
		std::cout << "check 1.5\n";
	}

	Array(unsigned int n) : _size(n), _array(new T[n]) {
		if (n == 0) { _array = NULL; }
		"check 1.6\n";
	}

	Array(const Array &origin) {
		std::cout << "check1.9 \n";
		if (_array[0]) {
			std::cout << "check2.0 \n";
			delete[] _array;
//			_array = NULL;
			std::cout << _array[1] << std::endl;
		}
		std::cout << "check2.1 \n";
		_size = origin._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; ++i) {
			_array[i] = origin._array[i];
		}
	}

	Array &operator=(const Array &rhs) {
		std::cout << "check2 \n";
		std::cout << _size << std::endl;
		if (this == &rhs) {
			return *this;
		}
		if (_array[0]) {
			delete[] _array;
			_array = NULL;
		}
		_size = rhs._size;
		_array = new T[rhs._size];
		for (unsigned int i = 0; i < _size; ++i) {
			_array[i] = rhs._array[i];
		}
		return *this;
	}

	~Array() {
		if (_array != NULL)
			delete[] _array;
	};

	class OutOfLimit : public std::exception {
		virtual const char* what() const throw() {
			return (RED"Out of limits" RESET);
		}
	};

	T &operator[](const int idx) {
		if (idx >= 0 && idx < _size) { return _array[idx]; }
		throw OutOfLimit();
	}

	T *get_array() const;

	size_t size() const ;
};

template <typename T>
size_t Array<T>::size() const { return _size; }

template <typename T>
T *Array<T>::get_array() const {
	return _array;
}


#endif //EX02_ARRAY_HPP
