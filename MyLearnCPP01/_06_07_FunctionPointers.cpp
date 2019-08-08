#include "_06_07_FunctionPointers.h"
#include <iostream>

void _06_07_FunctionPointers::Test()
{
	Test01();
}

void _06_07_FunctionPointers::Test01()
{
	//std::cout << Test01_Func1<<'\n';//被警告拦截
	std::cout << reinterpret_cast<void*>(Test01_Func1) << '\n';

	int (*funcPtr)() = Test01_Func1;
	funcPtr = Test01_Func2;
	std::cout << funcPtr() << '\n';

	double (*douFunc)(double) = Test01_Func3;
	std::cout << (*Test01_Func3)(8) << ' ' << Test01_Func3(4) << '\n';
}


int _06_07_FunctionPointers::Test01_Func1()
{
	return 5;
}

int _06_07_FunctionPointers::Test01_Func2()
{
	return 8;
}

double _06_07_FunctionPointers::Test01_Func3(double val)
{
	return val * val;
}
