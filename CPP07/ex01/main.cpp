#include <iostream>
#include "iter.hpp"

void add_a(std::string &s) {
	std::cout << s.append("a") << std::endl;
}

void add_1(int &n) {
	std::cout << ++n << std::endl;
}

void div_3(double &d) {
	d /= 3;
	std::cout << d << std::endl;
}

int main() {
	std::string s[5] = {"0", "1", "2", "3", "4"};
	iter(s, 5, add_a);
	std::cout << std::endl;

	int nums[5] = {0, 1, 2, 3, 4};
	iter(nums, 5, add_1);
	std::cout << std::endl;

	double d[5] = {0, 1, 2, 3, 4};
	iter(d, 5, div_3);
	return 0;
}
