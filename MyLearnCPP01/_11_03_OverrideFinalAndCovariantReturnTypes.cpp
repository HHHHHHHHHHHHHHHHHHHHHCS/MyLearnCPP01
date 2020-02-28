#include "_11_03_OverrideFinalAndCovariantReturnTypes.h"
#include <iostream>

void _11_03_OverrideFinalAndCovariantReturnTypes::Test()
{
	Test01();
	Test02();
	Test03();
}

void _11_03_OverrideFinalAndCovariantReturnTypes::Test01()
{
	//override 确保virtual继承成功
	A* rebase = new B();
	std::cout << rebase->getName3(3) << '\n';
	delete rebase;
}

void _11_03_OverrideFinalAndCovariantReturnTypes::Test02()
{
	//final 让后续不被virtual继承
}

void _11_03_OverrideFinalAndCovariantReturnTypes::Test03()
{
	//Covariant return types  协变返回类型
	Derived d;
	Base *b = &d;
	d.getThis()->printType();
	b->getThis()->printType();
}
