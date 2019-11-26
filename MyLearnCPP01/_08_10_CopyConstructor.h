#pragma once
#include <cassert>
#include <ostream>
#include <iostream>

class _08_10_CopyConstructor
{
public:
	class Fraction
	{
	private:
		int m_numerator;
		int m_denominator;
/*
		//写成私有的可以防止继承
		Fraction(const Fraction& frac)
			: m_numerator(frac.m_numerator), m_denominator(frac.m_denominator)
		{
			std::cout << "Copy constructor called\n ";
		}
*/
	public:
		//会自动继承 复制构造函数
		Fraction(int num = 0, int deno = 1)
			: m_numerator(num), m_denominator(deno)
		{
			assert(deno != 0);
		}

		Fraction(const Fraction& frac)
			: m_numerator(frac.m_numerator), m_denominator(frac.m_denominator)
		{
			std::cout << "Copy constructor called\n ";
		}

		friend std::ostream& operator<<(std::ostream& out, const Fraction& f1)
		{
			out << f1.m_numerator << '/' << f1.m_denominator << '\n';
			return out;
		}
	};

	static void Test();
};
