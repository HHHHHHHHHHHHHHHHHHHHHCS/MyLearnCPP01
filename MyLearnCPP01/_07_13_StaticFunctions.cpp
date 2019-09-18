#include "_07_13_StaticFunctions.h"
#include <iostream>

int _07_13_StaticFunctions::TestClass::s_value = 1;
int _07_13_StaticFunctions::TestClass::ID = 1;

//普通容器初始化
std::vector<char> _07_13_StaticFunctions::TestClass::s_myChars{'A','E','I','O','U'};

//自定义方法容器 定义容器
std::vector<char> _07_13_StaticFunctions::TestClass::s_backChars;
//执行自定义方法
_07_13_StaticFunctions::TestClass::_init _07_13_StaticFunctions::TestClass::s_init;



void _07_13_StaticFunctions::Test()
{
	Test01();
}


void _07_13_StaticFunctions::Test01()
{
	std::cout << TestClass::GetValue() << std::endl;
	for(int i=0;i<5;i++)
	{
		std::cout << TestClass::GetNextID() << std::endl;
	}
}

