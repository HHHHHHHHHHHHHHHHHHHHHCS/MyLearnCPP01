#include "_06_06_DefaultArguments.h"
#include <iostream>

void _06_06_DefaultArguments::Test()
{
	Test01();
}

void _06_06_DefaultArguments::Test01()
{
	Test01_Print(1);
}


void _06_06_DefaultArguments::Test01_Print(int x, int y)
{
	std::cout << x<<' '<<y<<std::endl;
}


