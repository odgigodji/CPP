#include <iostream>

//int gl_var = 1;
//int f( void) {return 2;}
//
//namespace Foo {
//	int gl_var = 3;
//	int f(void) {return 4; }
//}
//
//namespace Bar {
//	int gl_var = 5;
//	int f(void ) {return 6; }
//}
//
//namespace Muf = Bar;
//
//int main(int ac, char **av)
//{
//	char buff[512];
////	printf("gl_var : 		[%d]\n", gl_var);
////	printf("f(): 	 		[%d]\n\n", f());
////
////	printf("Foo:: gl_var: 		[%d]\n", Foo::gl_var);
////	printf("Foo::f		  	[%d]\n\n", Foo::f());
////
////	printf("Bar:: gl_var: 		[%d]\n", Bar::gl_var);
////	printf("Bar::f		  	[%d]\n\n", Bar::f());
////
////	printf("Muf::gl_car: 		[%d]\n", Muf::gl_var);
////	printf("Muf::f(): 		[%d]\n\n", Muf::f());
////
////	printf("::gl_var:  		[%d]\n", ::gl_var);
////	printf("::f():    		[%d]\n", ::f());
//
////	std::cout << "Hello, World!" << std::endl;
//
//	std::cout << "Input a word : ";
//	std::cin >> buff;
//	std::cout << "You entered: [" << buff << "]" << std::endl;
//
//	return 0;
//}

class DateClass
{
public:
	int m_day;
	int m_month;
	int m_year;

	void print()
	{
		std::cout << m_day << "/" << m_month << "/" << m_year << std::endl;
	}
};

int main()
{
	DateClass today;
	today.m_month = 12;
	today.m_year = 2019;

	today.m_day = 18; // используем оператор выбора членов для выбора переменной-члена m_day объекта today класса DateClass
	today.print(); // используем оператор выбора членов для вызова метода print() объекта today класса DateClass

	return 0;
}