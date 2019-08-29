#include "_07_04_Constructors.h"
#include <iostream>

void _07_04_Constructors::Test()
{
	//Test01();
	Test02();
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
