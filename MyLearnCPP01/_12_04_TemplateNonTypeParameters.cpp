#include "_12_04_TemplateNonTypeParameters.h"
#include <iostream>

/*
模版的指定对象需要是下面几种情况
具有整数类型或枚举的值
指向类对象的指针或引用
指向函数的指针或引用
指向类成员函数的指针或引用
std :: nullptr_t
*/

void _12_04_TemplateNonTypeParameters::Test()
{
	Test01();
}


void _12_04_TemplateNonTypeParameters::Test01()
{
	_12_04_TemplateNonTypeParameters_StaticArray<int, 12> intArray;

	for (int i = 0; i < 12; ++i)
		intArray[i] = i * i;

	for (int i = 0; i < 12; ++i)
	{
		std::cout << intArray[i] << ' ';
	}
	std::cout << '\n';

	_12_04_TemplateNonTypeParameters_StaticArray<double, 4> doubleArray;

	for (int i = 0; i < 4; ++i)
		doubleArray[i] = i * 0.1;

	for (int i = 0; i < 4; ++i)
	{
		std::cout << doubleArray[i] << ' ';
	}
	std::cout << '\n';
}
