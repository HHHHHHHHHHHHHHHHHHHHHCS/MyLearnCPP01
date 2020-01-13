#include "_10_6_InheritedOverridingFunctions.h"

void _10_6_InheritedOverridingFunctions::Test()
{
	Test01();
	Test02();
	Test03();
	Test04();
}


void _10_6_InheritedOverridingFunctions::Test01()
{
	Base b1{ 4 };
	Derived d1{ 6 };
	b1.Identify();
	d1.Identify();
}


void _10_6_InheritedOverridingFunctions::Test02()
{
	Base b1{ 4 };
	Derived d1{ 6 };
	b1.Identify();
	d1.BaseIdentify();
}


void _10_6_InheritedOverridingFunctions::Test03()
{
	Base b1{ 4 };
	Derived d1{ 6 };
	//b1.ProtFunc();//error:没有权限
	d1.ProtFunc();
	d1.ProtFunc(4);

}


void _10_6_InheritedOverridingFunctions::Test04()
{
	Base b1{ 4 };
	Derived d1{ 6 };
	b1.PublicFunc();
	//d1.PublicFunc();//error:没有这个方法

}
