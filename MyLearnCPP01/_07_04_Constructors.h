#pragma once

class _07_04_Constructors
{
public:
	class Foo
	{
	public:
		int x;
		int y;
	};

	class Fraction
	{
	private:
		int numerator;
		int denominator;
	public:
		Fraction();
		int GetNumerator() const;
		int GetDenominator() const;
		double GetValue() const;
	};

	static void Test();

	static void Test01();
	static void Test02();
};
