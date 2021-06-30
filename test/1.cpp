#include <iostream>
#include <string>

class Employee
{
public:
	std::string m_name;
	int m_id;
	double m_wage;

	// Метод вывода информации о работнике на экран
	void print()
	{
		std::cout << "Name: " << m_name <<
				  "\nId: " << m_id <<
				  "\nWage: $" << m_wage << '\n';
	}
};

int main()
{
	// Определяем двух работников
	Employee john;
	john.m_name = "John";
	john.m_id = 5;
	john.m_wage = 30;

	Employee max;
	max.m_name = "Max";
	max.m_id = 6;
	max.m_wage = 32.75;

	// Выводим информацию о работниках на экран
	john.print();
	std::cout<<std::endl;
	max.print();

	return 0;
}
