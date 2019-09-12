#include "_07_12_StaticMemberVariables.h"
#include <iostream>

int _07_12_StaticMemberVariables::GenID::staticInt = 0;
int _07_12_StaticMemberVariables::GenID::autoID = 0;


void _07_12_StaticMemberVariables::Test()
{
	//Test01();
	//Test02();
	Test03();
}

void _07_12_StaticMemberVariables::Test01()
{
	GenID id1{1};
	GenID id2{2};
	GenID id3{3};

	std::cout << id1.publicInt << ' ' << id2.publicInt << ' ' << id3.publicInt << '\n';

	std::cout << id1.DoAdd() << '\n';
	std::cout << id2.DoAdd() << '\n';
	std::cout << id3.DoAdd() << '\n';
}

void _07_12_StaticMemberVariables::Test02()
{
	GenID id1;
	GenID id2;
	GenID id3;

	std::cout << id1.staticInt << ' ' << id2.staticInt << ' ' << id3.staticInt
		<< ' ' << GenID::staticInt << '\n';

	GenID::staticInt = 66;

	std::cout << GenID::staticInt << '\n';
}


void _07_12_StaticMemberVariables::Test03()
{
	GenID id1;
	std::cout << GenID::autoID << '\n';

	GenID id2;
	std::cout << GenID::autoID << '\n';

	GenID id3;
	std::cout << GenID::autoID << '\n';
}
