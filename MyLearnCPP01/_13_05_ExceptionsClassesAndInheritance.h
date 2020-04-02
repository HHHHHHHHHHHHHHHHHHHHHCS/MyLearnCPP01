#pragma once
#include <iostream>

class _13_05_ExceptionsClassesAndInheritance
{
public:

	static void Test();

	class ThrowIntArray
	{
	private:
		int m_data[3];

	public:
		ThrowIntArray()
		{
		}

		int GetLength() { return 3; }

		int& operator[](const int index)
		{
			if (index < 0 || index >= GetLength())
				throw index;

			return m_data[index];
		}
	};

	static void Test01();


	class Member
	{
	public:
		Member()
		{
			std::cerr << "Member allocated some resources\n";
		}

		~Member()
		{
			std::cerr << "Member cleaned up\n";
		}
	};

	class A
	{
	private:
		int m_x;
		Member m_member;

	public:
		A(int x) : m_x(x)
		{
			if (x <= 0)
				throw 1;
		}

		~A()
		{
			std::cerr << "~A\n"; // should not be called
		}
	};

	static void Test02();


	class ArrayException
	{
	private:
		std::string m_err;
	public:
		ArrayException(std::string error)
			: m_err(error)
		{
		}

		const char* GetError() { return m_err.c_str(); }
	};

	class ExceptionIntArray
	{
	private:
		int m_data[3];
	public:
		ExceptionIntArray()
		{
		}

		int GetLength() { return 3; }

		int& operator[](const int index)
		{
			if (index < 0 || index >= GetLength())
				throw ArrayException{"Invalid Index"};

			return m_data[index];
		}
	};

	static void Test03();


	class Base
	{
	public:
		Base()
		{
		}
	};

	class Derived : public Base
	{
	public:
		Derived()
		{
		}
	};

	static void Test04();

	static void Test05();

	class CustomArrayException : public std::exception
	{
	private:
		std::string m_error;

	public:
		CustomArrayException(std::string error)
			: m_error(error)
		{
		}

		// return the std::string as a const C-style string
		//	const char* what() const { return m_error.c_str(); } // pre-C++11 version
		//noexcept 指这个函数不会抛出异常
		//在C++11中如果noexcept修饰的函数抛出了异常，编译器可以选择直接调用std::terminate()函数来终止程序的运行
		//，这比基于异常机制的throw()在效率上会高一些。
		const char* what() const noexcept override { return m_error.c_str(); } // C++11 version
	};

	class IntArray
	{
	private:

		int m_data[3]; // assume array is length 3 for simplicity
	public:
		IntArray()
		{
		}

		int getLength() { return 3; }

		int& operator[](const int index)
		{
			if (index < 0 || index >= getLength())
				throw CustomArrayException("Invalid index");

			return m_data[index];
		}
	};

	static void Test06();
};
