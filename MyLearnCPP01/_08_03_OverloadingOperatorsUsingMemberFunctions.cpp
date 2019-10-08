#include "_08_03_OverloadingOperatorsUsingMemberFunctions.h"
#include <iostream>

void _08_03_OverloadingOperatorsUsingMemberFunctions::Test()
{
	Test01();
}

/*
*将一个朋友重载运算符转换为成员重载运算符很容易：
*
*重载运算符被定义为成员而不是朋友（Cents :: operator +而不是friend operator +）
*左参数被删除，因为该参数现在成为隐式* this对象。
*在函数体内，可以删除所有对left参数的引用（例如，cents.m_cents变为m_cents，隐式引用* this对象）
*
*比如IO是不能重载的  因为坐标是传入值   而不是自己的隐式值
*/
_08_03_OverloadingOperatorsUsingMemberFunctions::Cents _08_03_OverloadingOperatorsUsingMemberFunctions::Cents::operator+(int value) const
{
	return Cents(cents + value);
}


void _08_03_OverloadingOperatorsUsingMemberFunctions::Test01()
{
	Cents cents(16);
	Cents cents2 = cents + 2;
	std::cout << cents2.GetCents()<<'\n';

}
