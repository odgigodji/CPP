#include <iostream>
#include <z3.h>
//#include <cstdint>

struct Data {
	std::string type;
	int         age;
};


//uinptr_t numeric value of a pointers
uintptr_t serialize(Data* ptr) {
	std::cout << "first pointer is " << ptr << std::endl;

	void *tmp;
	uintptr_t res;
	tmp = static_cast<void *>(ptr);

	res = (uintptr_t )(tmp);

//	uintptr_t i = reinterpret_cast<uintptr_t>(p);
//	std::cout << ptr->type << std::endl;
//	return static_cast<uintptr_t >(static_cast<void *>(ptr));
//	std::cout << *res << std::endl;

	return res;
}

Data* deserialize(uintptr_t raw) {
	std::cout << raw << std::endl;
	void *tmp;
	Data *ptr;

	tmp = (void *)raw;

	ptr = static_cast<Data *>(tmp);
//	uintptr_t *res = &raw;
//
//	tmp = static_cast<void *>(res);
//	ptr = (Data *)(tmp);
	std::cout << "last pointer is " << ptr << std::endl;
	return ptr;
}

int main() {
	Data *a = new Data;
	a->type = "schoolar";
	a->age  = 42;

	uintptr_t gg = serialize(a);
//	std::cout << gg << std::endl;

	deserialize(gg);
	return 0;
}