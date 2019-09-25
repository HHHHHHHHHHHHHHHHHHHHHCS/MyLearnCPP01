#pragma once
#include <iostream>

class _08_01_ArithmeticOperators
{
public:
	class Cents
	{
	private:
		int m_cents;
	public:
		Cents(int cents) { m_cents = cents; }

		friend Cents operator+(const Cents& c1, const Cents& c2);

		friend Cents operator-(const Cents& c1, const Cents& c2);

		friend Cents operator*(const Cents& c1, const Cents& c2)
		{
			return Cents(c1.GetCents() * c2.GetCents());
		}

		friend Cents operator*(const Cents& c1, const int& c2)
		{
			return Cents(c1.GetCents() * c2);
		}

		int GetCents() const { return m_cents; }
	};

	class MinMax
	{
	private:
		int m_min;
		int m_max;
	public:
		MinMax(int min, int max)
		{
			m_min = min;
			m_max = max;
		}

		int GetMin() { return m_min; }
		int GetMax() { return m_max; }

		friend MinMax operator+(const MinMax& m1, const MinMax& m2)
		{
			int min = m1.m_min < m2.m_min ? m1.m_min : m2.m_min;

			int max = m1.m_max > m2.m_max ? m1.m_max : m2.m_max;

			std::cout << "Min:" << m1.m_min << " Max:" << m1.m_max << ' ' 
				<< "Min:" << m2.m_min << " Max:" << m2.m_max << '\n';


			return MinMax(min, max);
		}

		friend MinMax operator+(const MinMax& m, int value)
		{
			int min = m.m_min < value ? m.m_min : value;

			int max = m.m_max > value ? m.m_max : value;

			std::cout << "Min:" << m.m_min << " Max:" << m.m_max << ' ' << value << '\n';

			return MinMax(min, max);
		}

		friend MinMax operator+(int value, const MinMax& m)
		{
			std::cout << value << " Min:" << m.m_min << " Max:" << m.m_max << '\n';
			return m + value;
		}
	};

	static void Test();
	static void Test01();
	static void Test02();
};
