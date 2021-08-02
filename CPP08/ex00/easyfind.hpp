//
// Created by Nelson Amerei on 30.07.21.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP
#include <iostream>
#include <algorithm>    // std::find

template <class T>
typename T::iterator	easyfind(T& arr, int b) {
	typename T::iterator it;

	it = std::find(arr.begin(), arr.end(), b);
	if (it == arr.end())
		throw "Can't be found\n";
	return it;
}


#endif //EX00_EASYFIND_HPP
