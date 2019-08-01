#include "_06_02_PassingArgumentsByAddress.h"
#include <iostream>

void _06_02_PassingArgumentsByAddress::Test()
{
	Test01();
}

void _06_02_PassingArgumentsByAddress::Test01()
{
	int value = 5;

	std::cout << value<<'\n';
	Test01_ChangeValue(&value);
	std::cout << value << '\n';
}

void _06_02_PassingArgumentsByAddress::Test01_ChangeValue(int *ptr)
{
	*ptr = 6;
}