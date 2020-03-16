#include "_11_11_PrintingUsingOperator.h"
#include <iostream>

void _11_11_PrintingUsingOperator::Test()
{
	Test01();
}

void _11_11_PrintingUsingOperator::Test01()
{
	Base b{};
	std::cout << b << '\n';

	Derived d{};
	std::cout << d << '\n';

	Base& refD{d};
	std::cout << refD << '\n';

	Base* ptrD{&d};
	std::cout << *ptrD << '\n';
}
