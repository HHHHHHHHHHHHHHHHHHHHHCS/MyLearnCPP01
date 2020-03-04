#include "_11_06_VirtualTable.h"
void _11_06_VirtualTable::Test()
{
	Test01();
}

void _11_06_VirtualTable::Test01()
{
	//C++存在一个虚表 用于存放虚拟方法
	//当D1时候  虚表 在编译阶段 被解析成D1
	//所以 就算转换成Base 也不会调用基函数

	//但是虚表存在虚拟指针  所以性能消耗会更大
	D1 d1;
	Base *dPtr = &d1;
	dPtr->function1();
}

