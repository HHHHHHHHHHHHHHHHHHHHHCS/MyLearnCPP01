#pragma once
#include <iostream>

class _11_04_VirtualDestructorsVirtualAssignmentOverridingVirtualization
{
public:
	class Base1
	{
	public:
		~Base1()
		{
			std::cout << "Calling ~Base()\n";
		}
	};

	class Derived1 : public Base1
	{
	private:
		int* m_array;
	public:
		Derived1(int length)
		{
			m_array = new int[length];
		}

		~Derived1()
		{
			std::cout << "Calling ~Derived()\n";
			delete[] m_array;
		}
	};

	//------------------

	class Base2
	{
	public:
		virtual ~Base2()
		{
			std::cout << "Calling ~Base()\n";
		}
	};

	class Derived2 : public Base2
	{
	private:
		int* m_array;
	public:
		Derived2(int length)
		{
			m_array = new int[length];
		}

		virtual ~Derived2()
		{
			std::cout << "Calling ~Derived()\n";
			delete[] m_array;
		}
	};

	//----------

	class Base3
	{
	public:
		virtual ~Base3()
		{
			std::cout << "Calling ~Base()\n";
		}
	};

	class Derived3 : public Base3
	{
	private:
		int* m_array;
	public:
		Derived3(int length)
		{
			m_array = new int[length];
		}

		~Derived3()
		{
			std::cout << "Calling ~Derived()\n";
			delete[] m_array;
		}
	};

	//----------

	class Base4
	{
	public:
		virtual const char* GetName(){ return "Base"; }
	};

	class Derived4 : public Base4
	{

	public:
		virtual const char* GetName() { return "Derived"; }
	};

	static void Test();
	static void Test01();
	static void Test02();
	static void Test03();
	static void Test04();
};
