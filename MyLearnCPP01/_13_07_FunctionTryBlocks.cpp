#include "_13_07_FunctionTryBlocks.h"

void _13_07_FunctionTryBlocks::Test()
{
	//Test01();
	Test02();
}

//当对象的构造失败时，不调用类的析构函数。
//因此，您可能会尝试使用函数try块来清理在失败之前已部分分配了资源的类
void _13_07_FunctionTryBlocks::Test01()
{
	try
	{
		B b{0};
	}
	catch (int)
	{
		std::cout << "Oops\n";
	}
}

void _13_07_FunctionTryBlocks::Test02()
{
	try
	{
		BB bb{ 0 };
	}
	catch (int)
	{
		std::cout << "Oops\n";
	}
}
