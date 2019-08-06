#include "_06_05_FunctionOverloading.h"
#include <iostream>

int _06_05_FunctionOverloading::Add(int x, int y)
{
	return x + y;
}


double _06_05_FunctionOverloading::Add(double x, double y)
{
	return x + y;
}


void _06_05_FunctionOverloading::Test01()
{
	std::cout << Add(1, 2) << std::endl;
	std::cout << Add(1.0, 2.0) << std::endl;
}

//不加上out  会引起同名歧义
int _06_05_FunctionOverloading::GetRandom(int& out)
{
	
}

double _06_05_FunctionOverloading::GetRandom(double& out)
{
	
}

void _06_05_FunctionOverloading::Test02()
{
	
}


