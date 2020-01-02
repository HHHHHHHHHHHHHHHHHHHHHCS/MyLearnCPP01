#pragma once
#include <iostream>

class _10_02_OrderConstructionClasses
{
public:
	class Base
	{
	public:
		int m_id;

		Base(int id = 0)
			: m_id(id)
		{
			std::cout << "Base\n";
		}

		int getId() const { return m_id; }
	};

	class Derived : public Base
	{
	public:
		double m_cost;

		Derived(double cost = 0.0)
			: m_cost(cost)
		{
			std::cout << "Derived\n";
		}

		double getCost() const { return m_cost; }
	};

	class A
	{
	public:
		A()
		{
			std::cout << "A\n";
		}
	};

	class B : public A
	{
	public:
		B()
		{
			std::cout << "B\n";
		}
	};

	class C : public B
	{
	public:
		C()
		{
			std::cout << "C\n";
		}
	};

	class D : public C
	{
	public:
		D()
		{
			std::cout << "D\n";
		}
	};

	static void Test();
	static void Test01();
	static void Test02();
};
