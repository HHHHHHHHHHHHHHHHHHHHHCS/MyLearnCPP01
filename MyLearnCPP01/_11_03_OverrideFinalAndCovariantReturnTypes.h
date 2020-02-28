#pragma once
#include <string>
#include <iostream>

class _11_03_OverrideFinalAndCovariantReturnTypes
{
public:
	class A
	{
	public:
#pragma warning(disable:4100) 
		virtual const char* getName1(int x) { return "A"; }
		virtual const char* getName2(int x) { return "A"; }
		virtual const char* getName3(int x) { return "A"; }
#pragma warning(default:4100) 
	};

	class B : public A
	{
	public:
#pragma warning(disable:4100) 
		//virtual const char* getName1(short int x) override { return "B"; }//compile error
		//virtual const char* getName2(int x) const override { return "B"; }//compile error
		virtual const char* getName3(int x) override { return "B"; }
#pragma warning(default:4100) 

	};

	//--------

	class AA
	{
	public:
		virtual const char* getName() { return "A"; }
	};

	class BB : public AA
	{
	public:
		virtual const char* getName() override final { return "BB"; } // okay, overrides A::getName()
	};

	class CC : public BB
	{
	public:
		//virtual const char* getName() override { return "C"; } // compile error: overrides B::getName(), which is final
	};

	//----------------

	class Base
	{
	public:
		// This version of getThis() returns a pointer to a Base class
		virtual Base* getThis() { std::cout << "called Base::getThis()\n"; return this; }
		void printType() { std::cout << "returned a Base\n"; }
	};

	class Derived : public Base
	{
	public:
		// Normally override functions have to return objects of the same type as the base function
		// However, because Derived is derived from Base, it's okay to return Derived* instead of Base*
		virtual Derived* getThis() { std::cout << "called Derived::getThis()\n";  return this; }
		void printType() { std::cout << "returned a Derived\n"; }
	};

	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
};
