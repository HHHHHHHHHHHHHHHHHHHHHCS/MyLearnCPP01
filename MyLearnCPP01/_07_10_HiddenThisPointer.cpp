#include "_07_10_HiddenThisPointer.h"
#include <iostream>

void _07_10_HiddenThisPointer::Test()
{
	Test01();
	Test02();
	Test03();
	Test04();
}

void _07_10_HiddenThisPointer::Test01()
{
	Simple simple(1);
	simple.SetID(2);
	std::cout << simple.GetID()<<'\n';
}

void _07_10_HiddenThisPointer::Test02()
{
	Simple A(1); //this=&A
	Simple B(2); //this=&B
	A.SetID(3); //this=&A
	B.SetID(4); //this=&B

}

void _07_10_HiddenThisPointer::Test03()
{
	Something sm(4);
}

void _07_10_HiddenThisPointer::Test04()
{
	Calc calc;
	calc.Add(5).Sub(3).Mul(4);

	std::cout << calc.GetValue() << '\n';
}


