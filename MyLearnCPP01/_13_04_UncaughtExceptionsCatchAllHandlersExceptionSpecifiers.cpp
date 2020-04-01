#include "_13_04_UncaughtExceptionsCatchAllHandlersExceptionSpecifiers.h"
#include <valarray>
#include <iostream>

void _13_04_UncaughtExceptionsCatchAllHandlersExceptionSpecifiers::Test()
{
	Test01();
}

void _13_04_UncaughtExceptionsCatchAllHandlersExceptionSpecifiers::Test01()
{
	//catch (...) 可以捕获任何异常
	try
	{
		throw 5; // throw an int exception
	}
	catch (double x)
	{
		std::cout << "We caught an exception of type double: " << x << '\n';
	}
	catch (...) // catch-all handler
	{
		std::cout << "We caught an exception of an undetermined type\n";
	}
}
