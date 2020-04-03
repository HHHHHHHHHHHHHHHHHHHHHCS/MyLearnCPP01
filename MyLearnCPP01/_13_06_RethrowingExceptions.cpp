#include "_13_06_RethrowingExceptions.h"

void _13_06_RethrowingExceptions::Test()
{
	Test01();
	Test02();
}

void _13_06_RethrowingExceptions::Test01()
{
	//这样的抛出 性能会低下一些 
	//而且  第二次抛出的时候会被切片 
	try
	{
		try
		{
			throw Derived();
		}
		catch (Base& b)
		{
			std::cout << "Caught Base b,which is actually a ";
			b.print();
			std::cout << '\n';
			throw b;//这里抛出的时候被切断了虚表
		}
	}
	catch (Base& b)
	{
		std::cout << "Caught Base b,which is actually a ";
		b.print();
		std::cout << '\n';
		//throw b;
	}
}

void _13_06_RethrowingExceptions::Test02()
{
	try
	{
		try
		{
			throw Derived();
		}
		catch (Base& b)
		{
			std::cout << "Caught Base b,which is actually a ";
			b.print();
			std::cout << '\n';
			throw;
		}
	}
	catch (Base& b)
	{
		std::cout << "Caught Base b,which is actually a ";
		b.print();
		std::cout << '\n';
		//throw;
	}
}
