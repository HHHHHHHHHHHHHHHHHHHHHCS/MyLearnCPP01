#pragma once
#include <ostream>
#include <iostream>

class _14_02_RValueReferences
{
public:
	static void Test();
	static void Test01();

	class Fraction
	{
	private:
		int m_numerator;
		int m_denominator;

	public:
		Fraction(int numerator = 0, int denominator = 1) :
			m_numerator{numerator}, m_denominator{denominator}
		{
		}

		friend std::ostream& operator<<(std::ostream& out, const Fraction& f1)
		{
			out << f1.m_numerator << '/' << f1.m_denominator;
			return out;
		}
	};

	static void Test02();

	static void Func(int& lref) // l-value arguments will select this function
	{
		std::cout << lref << "l-value reference\n";
	}

	static void Func(const int& lref) // l-value arguments will select this function
	{
		std::cout << lref << "l-value reference to const\n";
	}

	static void Func(int&& rref) // r-value arguments will select this function
	{
		std::cout << rref << "r-value reference\n";
	}

	static void Test03();
};
