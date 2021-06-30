#include <iostream>

class Stack {
	int m_nb[10];
	int m_len;
public:
	void reset() {
		m_len = 0;
		for(int i; i < 10; i++)
			m_nb[i] = 0;
	}
	bool push(int nb) {
		if (m_len == 10) {
			return false;
		} else {
			m_nb[m_len] = nb;
			m_len++;
			return true;
		}
	}
	int pop() {
		assert(m_len > 0); //если эдемента в стеке нет то выводим стейтмент

		return (m_nb[--m_len]);
	}
	void print() {
		std::cout << "(";
		for(int i = 0; i < m_len; i++)
			std::cout << m_nb[i] << " ";
		std::cout << ")\n";
	}
};

int main()
{
	int *ptr = new int;
	Stack stack;
	stack.reset();

	stack.print();

	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();

	return 0;
}