//
// Created by Nelson Amerei on 26.07.21.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP
#include <iostream>

template <typename T>
void	iter(T *array, const size_t &len, void(func)(T &)) {
	for (size_t i = 0; i < len; ++i) {
		func(array[i]);
	}
}

#endif //EX01_ITER_HPP
