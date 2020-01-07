#pragma once
#include <iostream>

class _10_05_AddingNewFunctionality
{
public:
	class Base
	{
	protected:
		int m_value;

	public:
		Base(int value)
			: m_value(value)
		{
		}

		void Identify() { std::cout << "I am a Base \n"; }
	};

	class Derived : public Base
	{
	public:
		Derived(int value)
			: Base(value)
		{
			value *= 2;
		}

		int GetValue() { return m_value; }
	};

	static void Test();
};
