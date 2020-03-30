#include "_13_02_BasicExceptionHandling.h"
#include <iostream>

void _13_02_BasicExceptionHandling::Test()
{
	//Test01();
	//Test02();
	Test03();
}

void _13_02_BasicExceptionHandling::Test01()
{
	try
	{
		// Statements that may throw exceptions you want to handle go here
		throw -1; // here's a trivial example
	}
	catch (int x)
	{
		// Any exceptions of type int thrown within the above try block get sent here
		std::cerr << "We caught an int exception with value: " << x << '\n';
	}
	catch (double) // no variable name since we don't use the exception itself in the catch block below
	{
		// Any exceptions of type double thrown within the above try block get sent here
		std::cerr << "We caught an exception of type double" << '\n';
	}
	catch (const std::string& str) // catch classes by const reference
	{
		(void)str;//避免没有使用的警告
		// Any exceptions of type std::string thrown within the above try block get sent here
		std::cerr << "We caught an exception of type std::string" << '\n';
	}

	std::cout << "Continuing on our merry way\n";
}

void _13_02_BasicExceptionHandling::Test02()
{
	try
	{
		throw 4.5; // throw exception of type double
		//std::cout << "This never prints\n";//警告无法访问的代码
	}
	catch (double x) // handle exception of type double
	{
		std::cerr << "We caught a double of value: " << x << '\n';
	}
}

void _13_02_BasicExceptionHandling::Test03()
{
	std::cout << "Enter a number: ";
	double x;
	std::cin >> x;

	try // Look for exceptions that occur within try block and route to attached catch block(s)
	{
		// If the user entered a negative number, this is an error condition
		if (x < 0.0)
			throw "Can not take sqrt of negative number"; // throw exception of type const char*

		// Otherwise, print the answer
		std::cout << "The sqrt of " << x << " is " << sqrt(x) << '\n';
	}
	catch (const char* exception) // catch exceptions of type const char*
	{
		std::cerr << "Error: " << exception << '\n';
	}
}
