//
// Created by Nelson Amerei on 26.07.21.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP
#include <iostream>

template <typename T, typename T1>
void	iter(T *array, T1 len, void(func)(T &)) {
	for (T1 i = 0; i < len; i++) {
		func(array[i]);
	}
}

#endif //EX01_ITER_HPP
