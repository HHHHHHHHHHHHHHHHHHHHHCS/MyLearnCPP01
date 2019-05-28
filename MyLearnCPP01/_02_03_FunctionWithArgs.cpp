#include "_02_03_FunctionWithArgs.h"

/*
	如果这样执行 C++ 执行不知道会先执行a() 或者 b()
	someFunction(a(), b()); 

	所以建议这样
	int avar{ a() }; 
	int bvar{ b() }; 
	someFunction(avar, bvar); 
 */

void _02_03_FunctionWithArgs::Test()
{
	Print(GetInput());
	Calc();
}

int _02_03_FunctionWithArgs::GetInput()
{
	int x;
	std::cout << "Please input a int : ";
	std::cin >> x;
	return x;
}

void _02_03_FunctionWithArgs::Print(int x)
{
	std::cout << "You input is :" << x<<std::endl;
}

int _02_03_FunctionWithArgs::Add(int x, int y)
{
	return x + y;
}

int _02_03_FunctionWithArgs::Multiply(int x, int y)
{
	return x * y;
}

void _02_03_FunctionWithArgs::Calc()
{
	std::cout << Add(3,4)*Multiply(2,3)<<std::endl;
}

