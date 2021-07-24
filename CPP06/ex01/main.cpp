#include <iostream>
#include <z3.h>
#include <cstdint>

struct Data {
	std::string name;
	int         age;
};

uintptr_t serialize(Data* ptr) {
	void *tmp;
	uintptr_t res;

	std::cout << "first pointer is " << ptr << std::endl;
	tmp = static_cast<void *>(ptr);
	res = (uintptr_t )(tmp);
	return res;
}

Data* deserialize(uintptr_t raw) {
	void *tmp;
	Data *ptr;

	tmp = (void *)raw;
	ptr = static_cast<Data *>(tmp);
	std::cout << "last pointer is  " << ptr << std::endl;
	return ptr;
}

int main() {
	Data *a = new Data;
	a->name = "Thor";
	a->age  = 42;
	std::cout << "Data a: type: \"" << a->name << "\" age: " << a->age << std::endl;

//call serialize
	uintptr_t raw = serialize(a);
	std::cout << "Raw is " << raw << std::endl;

//call deserialize
	Data *b = new Data;
	b = deserialize(raw);
	std::cout << "Data b: type: \"" << b->name << "\" age: " << b->age << std::endl;
	return 0;
}