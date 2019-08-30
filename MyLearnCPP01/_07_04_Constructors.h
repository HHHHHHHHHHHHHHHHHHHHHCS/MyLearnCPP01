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

	class ValueCls
	{
	private:
		int value;
	public:
		ValueCls(int x, int y = 1);
		double GetValue() const;
	};


	class AddCls
	{
	private:
		int value;
	public:
		AddCls(int x =2, int y = 1);
		int GetValue() const;
	};

	static void Test();

	static void Test01();
	static void Test02();
	static void Test03();
	static void Test04();
};
