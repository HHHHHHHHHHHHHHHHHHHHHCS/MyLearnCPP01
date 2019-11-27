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

		//默认会有一个克隆的构造函数 除非自己手写把他继承
		/*
				Fraction(const Fraction& frac)
					: m_numerator(frac.m_numerator), m_denominator(frac.m_denominator)
				{
					std::cout << "Copy constructor called\n ";
				}
		*/

		Fraction(int num = 0, int deno = 1)
			: m_numerator(num * 2), m_denominator(deno * 3)
		{
			std::cout << "num:" << num << " deno:" << deno << '\n';
			assert(deno != 0);
		}

		friend std::ostream& operator<<(std::ostream& out, const Fraction& f1)
		{
			out << f1.m_numerator << '/' << f1.m_denominator << '\n';
			return out;
		}
	};

	static void Test();
};
