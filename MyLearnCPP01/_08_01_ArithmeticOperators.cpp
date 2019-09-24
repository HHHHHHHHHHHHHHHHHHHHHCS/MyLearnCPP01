#include "_08_01_ArithmeticOperators.h"
#include <iostream>
using Cents = _08_01_ArithmeticOperators::Cents;


void _08_01_ArithmeticOperators::Test()
{
	Test01();
}


Cents operator+(const Cents& c1, const Cents& c2)
{
	return Cents(c1.m_cents + c2.m_cents);
}

Cents operator-(const Cents& c1, const Cents& c2)
{
	return Cents(c1.m_cents - c2.m_cents);
}

void _08_01_ArithmeticOperators::Test01()
{
	Cents cents1(6);
	Cents cents2(8);

	Cents centsSum = cents1 + cents2;
	std::cout << centsSum.GetCents() << std::endl;

	Cents centsSub = cents1 - cents2;
	std::cout << centsSub.GetCents() << std::endl;

	Cents centsMul = cents1 * cents2;
	std::cout << centsMul.GetCents() << std::endl;

	//TODO:Overloading operators for operands of different types
}

void _08_01_ArithmeticOperators::Test02()
{
}
