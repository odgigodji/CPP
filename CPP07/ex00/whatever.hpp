//
// Created by Nelson Amerei on 25.07.21.
//

#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP

template <typename T>
const T& max(const T& a, const T& b) {
	return (a > b) ? a : b;
}

template <typename T>
const T& min(const T& a, const T& b) {
	return (a < b) ? a : b;
}

template <typename T>
void swap(T& a, T&b) {
	T tmp;
	tmp = a;
	a   = b;
	b   = tmp;
}

#endif //EX00_WHATEVER_HPP
