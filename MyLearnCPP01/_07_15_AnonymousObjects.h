#pragma once
#include <iostream>

class _07_15_AnonymousObjects
{
public:
	class Cents
	{
	private:
		int m_cents;
	public:
		Cents(int cents) { m_cents = cents; }

		int GetCents() const { return m_cents; }
	};

	static void Print(const Cents &cents)
	{
		std::cout << cents.GetCents() << " Cents\n";
	}

	static Cents Add(const Cents &c1,const Cents &c2)
	{
		Cents sum = Cents(c1.GetCents() + c2.GetCents());
		return  sum;
	}

	static Cents AddEX(const Cents &c1, const Cents &c2)
	{
		return  Cents(c1.GetCents() + c2.GetCents());
	}

	static void Test();
	static void Test01();
	static void Test02();
};
