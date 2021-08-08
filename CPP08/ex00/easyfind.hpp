//
// Created by Nelson Amerei on 30.07.21.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP
#include <iostream>
#include <algorithm>    // std::find
# define MAG 	"\x1b[35m"
# define RESET	"\x1b[0m"

template <class T>
typename T::iterator	easyfind(T& arr, int b) {
	typename T::iterator it;

	it = std::find(arr.begin(), arr.end(), b);
	if (it == arr.end()) { throw MAG"Can't be found"RESET; }
	return it;
}

#endif //EX00_EASYFIND_HPP
