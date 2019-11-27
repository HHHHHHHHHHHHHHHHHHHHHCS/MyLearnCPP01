#pragma once
#include <cassert>
#include <ostream>
#include <iostream>

class _08_11_CopyInitialization
{
public:
	class Fraction
	{
	private:
		int m_num;
		int m_den;

	public:

		Fraction(int num = 0, int den = 1)
			: m_num(num), m_den(den)
		{
			assert(den != 0);
		}

		Fraction(const Fraction& copy)
			: m_num(copy.m_num), m_den(copy.m_den)
		{
			std::cout << "Do Copy" << std::endl;
		}

		friend std::ostream& operator<<(std::ostream& out, const Fraction& f1)
		{
			out << f1.m_num << '/' << f1.m_den;
			return out;
		}

		int GetNum() { return m_num; }
		void SetNum(int num) { m_num = num; }
	};


	static void Test();

	static Fraction MakeNegative(Fraction f)
	{
		f.SetNum(-f.GetNum());
		return f;
	}
};
