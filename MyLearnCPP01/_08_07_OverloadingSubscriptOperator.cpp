#include "_08_07_OverloadingSubscriptOperator.h"
#include <iostream>

void _08_07_OverloadingSubscriptOperator::Test()
{
	Test01();
	Test02();
	Test03();
	Test04();
}

void _08_07_OverloadingSubscriptOperator::Test01()
{
	IntList list;
	list.SetItem(2, 99);
	std::cout << list.GetList()[2] << '\n';
	std::cout << list[2] << '\n';
}

void _08_07_OverloadingSubscriptOperator::Test02()
{
	const IntList clist;
	//clist.SetItem(2, 66);//error
	std::cout << clist[2] << '\n';

	//assert
	//std::cout << clist[66] << '\n';
}

void _08_07_OverloadingSubscriptOperator::Test03()
{
	IntList *list = new IntList;
	//list[2] = 3; // error
	//因为运算符的关系  会先计算 list[2]  在计算 *
	//所以 需要 括号 (*list)
	(*list)[2] = 3;
	delete list;
}

void _08_07_OverloadingSubscriptOperator::Test04()
{
	Stupid stupid;
	stupid["Hello World"];
}
