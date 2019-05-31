#include "_02_08_MultipleCodeFiles.h"

//提前定义 ,引用了_02_07_ForwardDeclDefine.cpp 的Add
int Add(int, int);

void _02_08_MultipleCodeFiles::Test()
{
	std::cout << Add(3, 4);
}