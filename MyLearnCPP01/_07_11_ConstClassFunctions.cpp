#include "_07_11_ConstClassFunctions.h"
#include <iostream>

void _07_11_ConstClassFunctions::Test()
{
	Test01();
	Test02();
	Test03();
}

void _07_11_ConstClassFunctions::Test01()
{
	const int value1 = 5; // 复制初始化
	const int value2(7); // 引用初始化
	const int value3{9}; // C++ 11 初始化

	const Date date1; //初始化使用默认参数
	const Date date2(2020, 10, 16); // 报错 初始化使用参数
	const Date date3{2020, 10, 18}; //C++11  初始化使用参数

	std::cout << value1 << ' ' << value2 << ' ' << value3 << std::endl;
	std::cout << date1.day << ' ' << date2.day << ' ' << date3.day << std::endl;
}

void _07_11_ConstClassFunctions::Test02()
{
	const Something something; //使用默认的构造函数

	//something.m_value = 5; // error :const
	//something.SetValue(5); // error :const

	//如果方法没有标记const  则const 变量 不能使用这个方法
	std::cout << something.GetValue() << '\n';
}


void _07_11_ConstClassFunctions::Test03()
{
	Something something;
	something.GetString() = "Hi";

	const Something something2;
	//something2.GetCString();//因为string 不能是const 所以不行
}
