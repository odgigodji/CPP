#include <iostream>

class Numbers {
	int m_a;
	int m_b;
public:
	void set(int a, int b){
		m_a = a;
		m_b = b;
	}

	void print() {
		std::cout << "Numbers(" << m_a << ", " << m_b << ")\n";
	}
};

int main()
{
	Numbers n1;
	n1.set(3, 3); // инициализируем объект n1 значениями 3 и 3

	Numbers n2; // инициализируем объект n2 значениями 4 и 4
	n2.set(4, 4);

	n1.print();
	n2.print();

	return 0;
}