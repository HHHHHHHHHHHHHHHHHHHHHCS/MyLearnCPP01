#pragma once

class _11_06_VirtualTable
{
public:
	class Base
	{
	public:
		//FunctionPointer *__vptr;
		virtual void function1() {};
		virtual void function2() {};
	};

	class D1 : public Base
	{
	public:
		virtual void function1() {};
	};

	class D2 : public Base
	{
	public:
		virtual void function2() {};
	};
	static void Test();
	static void Test01();
};
