#include "_04_02_Void.h"

void _04_02_Void::Test()
{
	
}

//C的写法
int _04_02_Void::VoidArg(void)
{
	int x;
	std::cin >> x;
	return x;
}

//新C++ 写法
int _04_02_Void::NullArg()
{
	return 4; 
}