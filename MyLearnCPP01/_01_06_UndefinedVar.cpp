#include "_01_06_UndefinedVar.h"

void _01_06_UndefinedVar::Test()
{
	int x;

	x = 10;//如果这里不给值 会报错

	DoNothing(x);

	std::cout << x;
}

void _01_06_UndefinedVar::DoNothing(const int &x)
{
	std::cout << x << "\n";
}

