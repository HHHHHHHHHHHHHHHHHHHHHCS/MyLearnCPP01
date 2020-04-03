#pragma once
#include <iostream>

class _13_06_RethrowingExceptions
{
public:
	class Base
	{
	public:
		Base() {}
		virtual void print() { std::cout << "Base"; }
	};

	class Derived : public Base
	{
	public:
		Derived() {}
		virtual void print() { std::cout << "Derived"; }
	};

	static void Test();
	static void Test01();
	static void Test02();
};
