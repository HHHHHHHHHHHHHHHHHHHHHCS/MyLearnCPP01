#include "_06_09_Recursion.h"
#include <iostream>

void _06_09_Recursion::Test()
{
	Test01();
}

void _06_09_Recursion::Test01()
{
	CountDown(5);
	std::cout << SumTo(5) << '\n';
	std::cout << Fibonacci(20) << '\n';
}

void _06_09_Recursion::CountDown(int count)
{
	std::cout << "push:" << count << '\n';

	if (count > 1)
	{
		CountDown(count - 1);
	}

	std::cout << "pop:" << count << '\n';
}

int _06_09_Recursion::SumTo(int sumto)
{
	if (sumto <= 0)
	{
		return 0;
	}
	else if (sumto == 1)
	{
		return 1;
	}
	else
	{
		return SumTo(sumto - 1) + sumto;
	}
}

int _06_09_Recursion::Fibonacci(int number)
{
	if (number <= 0)
	{
		return 0;
	}
	if (number == 1)
	{
		return 1;
	}
	return Fibonacci(number - 1) + Fibonacci(number - 2);
}
