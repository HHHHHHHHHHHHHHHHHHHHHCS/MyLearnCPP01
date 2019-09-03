#pragma once
#include <iostream>

class _07_05_ConstructorMemberInitializerLists
{
public:
	class Cls01
	{
	private:
		int m_value1;
		double m_value2;
		char m_value3;
	public:
		Cls01()
		{
			m_value1 = 1;
			m_value2 = 2.2;
			m_value3 = 'c';
		}
	};

	class Cls02
	{
	private:
		int m_value1;
		double m_value2;
		char m_value3;

	public:
		Cls02() : m_value1(1), m_value2(2.2), m_value3('c') // directly initialize our member variables
		{
			// No need for assignment here
		}

		void Print()
		{
			std::cout << "Something(" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")\n";
		}
	};


	class Cls03
	{
	private:
		int m_value1;
		double m_value2;
		char m_value3;

	public:
		Cls03(int value1, double value2, char value3 = 'c')
			: m_value1(value1), m_value2(value2), m_value3(value3)
		{
		}

		void print()
		{
			std::cout << "Something(" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")\n";
		}
	};


	class Cls04
	{
	private:
		const int m_value;

	public:
		Cls04() : m_value{5} // Uniformly initialize our member variables
		{
		}
	};

	class Cls05
	{
	private:
		const int m_array[5];

	public:
		Cls05() : m_array{1, 2, 3, 4, 5} // use uniform initialization to initialize our member array
		{
		}
	};

	class A
	{
	public:
		A(int x) { std::cout << "A " << x << "\n"; }
	};

	class B
	{
	private:
		A m_a;
	public:
		B(int y)
			: m_a(y - 1) // call A(int) constructor to initialize member m_a
		{
			std::cout << "B " << y << "\n";
		}
	};

	static void Test();
	static void Test01();
};
