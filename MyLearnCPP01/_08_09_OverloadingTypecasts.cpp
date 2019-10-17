#include "_08_09_OverloadingTypecasts.h"
#include <iostream>

void _08_09_OverloadingTypecasts::Test()
{
	Test01();
	Test02();
	Test03();
}

void _08_09_OverloadingTypecasts::Test01()
{
	Cents cents(5);
	CoutInt(cents);
	CoutDouble(cents);
}

void _08_09_OverloadingTypecasts::CoutInt(int i)
{
	std::cout << i << '\n';
}

void _08_09_OverloadingTypecasts::CoutDouble(double i)
{
	std::cout << i << '\n';
}


void _08_09_OverloadingTypecasts::Test02()
{
	Cents cents(10);
	std::cout << static_cast<double>(cents) << '\n';
}

void _08_09_OverloadingTypecasts::Test03()
{
	Dollars dollars(10);
	std::cout << static_cast<double>(static_cast<Cents>(dollars)) << '\n';
}
