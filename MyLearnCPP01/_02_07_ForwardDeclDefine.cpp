#include "_02_07_ForwardDeclDefine.h"

int Add(int x,int y);

void _02_07_ForwardDeclDefine::Test()
{
	DoAdd();
}

void _02_07_ForwardDeclDefine::DoAdd()
{
	std::cout << Add(3,4);
}

int Add(int x, int y)
{
	return x + y;
}
