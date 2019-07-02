#include "_05_05_IntroductionPointers.h"
#include <iostream>

void _05_05_IntroductionPointers::Test()
{
	//Test01();
	//Test02();
	//Test03();
	//WrongMethod();
	SizeOf();
}


void _05_05_IntroductionPointers::Test01()
{
	int x = 5;
	std::cout << x << '\n'; 
	std::cout << &x << '\n';

	std::cout << typeid(&x).name();
}

void _05_05_IntroductionPointers::Test02()
{
	int x = 5;
	std::cout << x << '\n'; 
	std::cout << &x << '\n'; 
	std::cout << *(&x) << '\n'; 
}

void _05_05_IntroductionPointers::Test03()
{
	int value = 5;
	int *ptr = &value; 

	std::cout << &value << '\n'; 
	std::cout << ptr << '\n'; 
}

void _05_05_IntroductionPointers::WrongMethod()
{
	int iValue = 5;
	double dValue = 7.0;

	int *iPtr = &iValue; // ok
	double *dPtr = &dValue; // ok
	//iPtr = &dValue; // wrong
	//dPtr = &iValue; // wrong
	//int *ptr = 5; // wrong
	//double *dPtr = 0x0012FF7C; // wrong
	std::cout << *iPtr<<' '<<*dPtr<<std::endl;
}

void _05_05_IntroductionPointers::SizeOf()
{
	char *chPtr; // chars are 1 byte
	int *iPtr; // ints are usually 4 bytes
	struct Something
	{
		int nX, nY, nZ;
	};
	Something *somethingPtr; // Something is probably 12 bytes

	std::cout << sizeof(chPtr) << '\n'; // prints 8
	std::cout << sizeof(iPtr) << '\n'; // prints 8
	std::cout << sizeof(somethingPtr) << '\n'; // prints 8
}