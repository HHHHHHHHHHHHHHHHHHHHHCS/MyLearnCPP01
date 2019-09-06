#include "_07_08_OverlappingAndDelegatingConstructors.h"

void _07_08_OverlappingAndDelegatingConstructors::Test()
{
	Test01();
	Test02();
}


void _07_08_OverlappingAndDelegatingConstructors::Test01()
{
	Cls01 cls01;//如果是无参数构造函数 不能写括号 
	Cls01 cls02("ss");
	Cls01 cls03(4);
}


void _07_08_OverlappingAndDelegatingConstructors::Test02()
{
	Cls02 cls01;
	Cls02 cls02(1);
	Cls02 cls03(2,3);
}
