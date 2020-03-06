#pragma once
#include <iostream>

class _11_08_VirtualBaseClasses
{
public:
	class A
	{
	public:
		A(int a)
		{
			std::cout << "A:" << a << std::endl;
		}
	};

	class B : virtual public A
	{
	public:
		B(int a, int b): A(a)
		{
			std::cout << "B:" << b << std::endl;
		}
	};

	class C : virtual public A
	{
	public:
		C(int a, int c) : A(a)
		{
			std::cout << "C:" << c << std::endl;
		}
	};

	class D : public B, public C
	{
	public:
		D(int a, int b, int c) : A(a), B(a, b), C(a, c)
		{
			std::cout << "D:" << std::endl;
		}
	};

	static void Test();
	static void Test01();
};
