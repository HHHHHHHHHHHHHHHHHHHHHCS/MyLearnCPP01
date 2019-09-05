#include "_07_07_NonStaticMemberInitialization.h"

void _07_07_NonStaticMemberInitialization::Test()
{
	Test01();
	Test02();
	Test03();
}


void _07_07_NonStaticMemberInitialization::Test01()
{
	Cls01 cls01;
	cls01.Print();
}


void _07_07_NonStaticMemberInitialization::Test02()
{
	Cls02 cls02{1,2};//必须要有参数
	cls02.Print();
}


void _07_07_NonStaticMemberInitialization::Test03()
{
	Cls03 def;
	def.Print();

	Cls03 blue("blue");
	blue.Print();

	Cls03 twenty(20.0);
	twenty.Print();

	Cls03 blueTwenty("blue", 20.0);
	blueTwenty.Print();
}

