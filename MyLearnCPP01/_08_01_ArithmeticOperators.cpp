#include "_08_01_ArithmeticOperators.h"
#include <iostream>
using Cents = _08_01_ArithmeticOperators::Cents;


void _08_01_ArithmeticOperators::Test()
{
	//Test01();
	Test02();
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

	centsMul = cents1 * 8;
	std::cout << centsMul.GetCents() << std::endl;
}

void _08_01_ArithmeticOperators::Test02()
{
	MinMax m1(10, 15);
	MinMax m2(8, 11);
	MinMax m3(3, 12);

	MinMax final = m1 + m2 + 5 + 8 + m3 + 16;

	std::cout << m1.GetMin() << ' ' << m2.GetMax() << '\n';
}
