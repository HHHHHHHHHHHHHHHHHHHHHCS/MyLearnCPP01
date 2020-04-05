#include "_13_08_ExceptionDangersAndDownsides.h"
#include <iostream>

void _13_08_ExceptionDangersAndDownsides::Test()
{
	Test01();
}

void _13_08_ExceptionDangersAndDownsides::Test01()
{
	//比如打开文件异常之后  就要catch 关闭
	//再比如构造函数之后  异常了  析构不一定执行

	//例外异常捕获可能存在一定的性能问题   
	//但是手动判断一些免性能消耗
	//所以手段判断一些异常 是比较好的    除非考虑不到
	Person* joy = nullptr;
	try
	{
		joy = new Person{"Joy", 2333};
	}
	catch (PersonException exception)
	{
		delete joy;
		std::cerr << exception.what() << '\n';
	}
}
