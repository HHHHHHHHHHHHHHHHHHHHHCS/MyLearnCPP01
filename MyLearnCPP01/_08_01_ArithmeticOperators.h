#pragma once

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


		int GetCents() const { return m_cents; }
	};


	static void Test();
	static void Test01();
	static void Test02();
};
