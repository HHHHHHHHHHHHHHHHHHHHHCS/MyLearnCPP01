#include "_07_02_PublicPrivate.h"
#include <iostream>

void _07_02_PublicPrivate::Test()
{
	Test01();
	Test02();
}

void _07_02_PublicPrivate::Test01()
{
	Str str{1, 2, 3};
	std::cout << str.year << '\n';
}

void _07_02_PublicPrivate::Cls::SetMin(int val)
{
	min = val;
}


int _07_02_PublicPrivate::Cls::GetMin() const
{
	return min;
}


void _07_02_PublicPrivate::Test02()
{
	Cls cls;
	//cls.m_month = 1;//访问权限不足
	cls.hour = 1;
	std::cout << cls.hour << '\n';
	cls.SetMin(3);
	std::cout << cls.GetMin()<<'\n';
}
