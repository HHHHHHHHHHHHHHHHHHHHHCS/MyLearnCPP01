#include "_13_05_ExceptionsClassesAndInheritance.h"
#include <iostream>

void _13_05_ExceptionsClassesAndInheritance::Test()
{
	// Test01();
	// Test02();
	// Test03();
	// Test04();
	// Test05();
	Test06();
}

void _13_05_ExceptionsClassesAndInheritance::Test01()
{
	try
	{
		ThrowIntArray{}[6];
	}
	catch (int x)
	{
		std::cout << x << '\n';
	}
}

//如果在构造函数中异常了  则不会执行析构
//对于已经构造了的属性  则会析构其属性
void _13_05_ExceptionsClassesAndInheritance::Test02()
{
	try
	{
		A a(0);
	}
	catch (int)
	{
		std::cerr << "Oops\n";
	}
}


void _13_05_ExceptionsClassesAndInheritance::Test03()
{
	//这样可以防止编译器复制异常，这在异常是类对象时可能会很昂贵，并防止在处理派生异常类时进行对象切片（稍后再讨论）。
	//除非有特殊原因，否则通常应避免通过指针捕获异常。
	try
	{
		ExceptionIntArray{}[6];
	}
	catch (ArrayException x)
	{
		std::cout << x.GetError() << '\n';
	}
}

void _13_05_ExceptionsClassesAndInheritance::Test04()
{
	//抛出的异常 派生类要在父类前面不然会被父类先捕获
	try
	{
		throw Derived();
	}
	catch (Derived&)
	{
		std::cerr << "caught Derived";
	}
	catch (Base&)
	{
		std::cerr << "caught Base";
	}
}

void _13_05_ExceptionsClassesAndInheritance::Test05()
{
	//exception 是一个万能异常捕获 
	try
	{
		// Your code using standard library goes here
		// We'll trigger one of these exceptions intentionally for the sake of example
		std::string s;
		s.resize(static_cast<unsigned long long>(-1)); // will trigger a std::length_error
	}
	catch (std::length_error& exception)
	{
		std::cerr << "You ran out of memory!" << exception.what() << '\n';
	}
	catch (std::exception& exception)
	{
		std::cerr << "Standard exception: " << exception.what() << '\n';
	}
}


void _13_05_ExceptionsClassesAndInheritance::Test06()
{
	//在C++11中如果noexcept修饰的函数抛出了异常，编译器可以选择直接调用std::terminate()函数来终止程序的运行，这比基于异常机制的throw()在效率上会高一些。
	IntArray array;

	try
	{
		int value = array[5];
		(void)value;
	}
	catch (CustomArrayException &exception) // derived catch blocks go first
	{
		std::cerr << "An array exception occurred (" << exception.what() << ")\n";
	}
	catch (std::exception &exception)
	{
		std::cerr << "Some other std::exception occurred (" << exception.what() << ")\n";
	}
}
