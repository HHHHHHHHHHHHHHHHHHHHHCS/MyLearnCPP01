#include "_07_04_Constructors.h"
#include <iostream>
#include "_04_S_04_Auto.h"

void _07_04_Constructors::Test()
{
	//Test01();
	//Test02();
	//Test03();
	Test04();
}

void _07_04_Constructors::Test01()
{
	Foo fo1 = {3, 4};
	Foo fo2{5, 6}; //C++11
	std::cout << fo1.x << ' ' << fo1.y << ' ' << fo2.x << ' ' << fo2.y << std::endl;
}

_07_04_Constructors::Fraction::Fraction()
{
	numerator = 0;
	denominator = 1;
}

int _07_04_Constructors::Fraction::GetNumerator() const
{
	return numerator;
}

int _07_04_Constructors::Fraction::GetDenominator() const
{
	return denominator;
}

double _07_04_Constructors::Fraction::GetValue() const
{
	return static_cast<double>(numerator) / denominator;
}

void _07_04_Constructors::Test02()
{
	Fraction frac;

	std::cout << frac.GetNumerator() << '/' << frac.GetDenominator() << '=' << frac.GetValue() << '\n';
}

_07_04_Constructors::ValueCls::ValueCls(int x, int y)
{
	value = static_cast<int>(static_cast<double>(x) / y);
}

double _07_04_Constructors::ValueCls::GetValue() const
{
	return value;
}


void _07_04_Constructors::Test03()
{
	ValueCls cls1(2);

	ValueCls cls2{4, 2};

	std::cout << cls1.GetValue() << ' ' << cls2.GetValue() << '\n';
}


_07_04_Constructors::AddCls::AddCls(int x, int y)
{
	value = x + y;
}

int _07_04_Constructors::AddCls::GetValue() const
{
	return value;
}

void _07_04_Constructors::Test04()
{
	AddCls cls0;
	AddCls cls1(1);
	AddCls cls2(1,2);

	std::cout << cls0.GetValue()<<' '<< cls1.GetValue()<<' '<<cls2.GetValue();
}
