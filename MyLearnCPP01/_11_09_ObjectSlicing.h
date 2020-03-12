#pragma once
#include <iostream>

class _11_09_ObjectSlicing
{
public:

	class Base
	{
	protected:
		int m_value{};

	public:
		Base(int value)
			: m_value{value}
		{
		}

		virtual const char* getName() const { return "Base"; }
		int getValue() const { return m_value; }
	};

	class Derived : public Base
	{
	public:
		int v;

		Derived(int value)
			: Base{value}
		{
		}

		virtual const char* getName() const { return "Derived"; }
	};


	static void PrintName(const Base base) // note: base passed by value, not reference
	{
		std::cout << "I am a " << base.getName() << '\n';
	}

	static void RefPrintName(const Base& base) // note: base now passed by reference
	{
		std::cout << "I am a " << base.getName() << '\n';
	}

	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
	static void Test04();
};
