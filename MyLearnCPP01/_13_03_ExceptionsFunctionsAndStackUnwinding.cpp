#include "_13_03_ExceptionsFunctionsAndStackUnwinding.h"
#include <iostream>

void _13_03_ExceptionsFunctionsAndStackUnwinding::Test()
{
	Test01();
}

void _13_03_ExceptionsFunctionsAndStackUnwinding::Test01()
{
	First();
}

void _13_03_ExceptionsFunctionsAndStackUnwinding::Last()
{
	std::cout << "Start last\n";
	std::cout << "Last throwing int exception\n";
	throw - 1;
	//std::cout << "End Last\n";//不会执行 会有警告
}

void _13_03_ExceptionsFunctionsAndStackUnwinding::Third()
{
	std::cout << "Start third\n";
	Last();
	std::cout << "End third\n";
}

void _13_03_ExceptionsFunctionsAndStackUnwinding::Second()
{
	std::cout << "Start Second\n";
	try
	{
		Third();
	}
	catch (double x)
	{
		std::cerr << "Second caught double exception " << x << " \n";
	}
}

void _13_03_ExceptionsFunctionsAndStackUnwinding::First()
{
	std::cout << "Start First\n";

	try
	{
		Second();
	}
	catch (int)
	{
		std::cerr << "First caught int exception\n";
	}
	catch (double)
	{
		std::cerr << "First caught double exception\n";
	}

	std::cout << "End First\n";
}
