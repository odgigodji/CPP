//
// Created by Nelson Amerei on 05.08.21.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <iterator>
#include <iostream>
#include <stack>
#include <deque>
#include <iterator>
#include <vector>


template <typename T>
class	MutantStack : public std::stack<T> { //std::stack<T> dependent on T
//A dependent name is essentially a name that depends on a template argument.
public:
	MutantStack() {}
	MutantStack(const MutantStack & origin) { *this = origin; }
	MutantStack& operator=(const MutantStack & rhs) {
		(void)rhs;
		return *this;
	}
	~MutantStack() {};

	/*
* https://en.cppreference.com/w/cpp/language/dependent_name
* std::stack<T>::container_type::iterator  is a dependent name
 * The typename disambiguator for dependent names
	 */

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() {
		return (std::stack<T>::c.begin()); //c is object from deque(bass class)
	}
	iterator end() {
		return (std::stack<T>::c.end());
	}
};

#endif //EX02_MUTANTSTACK_HPP
